#include <stdio.h>

int map[1010][1010];

int main(){

  int leng, lens;
  int k;

  scanf("%d %d", &leng, &lens);
  scanf("%d", &k);

  for(int i=0; i<=leng+1; i++){
    for(int j=0; j<=lens+1; j++){
      map[i][j] = -1;
    }
  }

  for(int i=1; i<=leng; i++){
    for(int j=1; j<=lens; j++){
      map[i][j] = 0;
    }
  }

  int y=1, x=1, s=1;
  while(s<=lens*leng){
    //우
    while(map[y][x]==0){
      map[y][x] = s;
      if(s==k){
        printf("%d %d ", y, x);
        return 0;
      }
      x++, s++;
    }
    x--, y++;

    //하
    while(map[y][x]==0){
      map[y][x]=s;
      if(s==k){
        printf("%d %d", y, x);
        return 0;
      }
      y++, s++;
    }
    x--, y--;

    //좌
    while(map[y][x]==0){
      map[y][x]=s;
      if(s==k){
        printf("%d %d", y, x);
        return 0;
      }
      x--, s++;
    }
    x++, y--;

    //상
    while(map[y][x]==0){
      map[y][x]=s;
      if(s==k){
        printf("%d %d", y, x);
        return 0;
      }
      y--, s++;
    }
    x++, y++;

  }

  printf("0\n");

  return 0;



}
