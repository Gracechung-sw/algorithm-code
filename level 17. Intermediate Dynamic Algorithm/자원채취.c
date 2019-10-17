#include <stdio.h>

int lens, leng;
int map[1010][1010];
int T[1010][1010];

int max(int a, int b){
  return (a>b)? a:b;
}


int main(){
  scanf("%d %d", &lens, &leng);

  for(int i=0; i<lens; i++){
    for(int j=0; j<leng; j++){
      scanf("%d", &map[i][j]);
    }
  }

  for(int i=0; i<lens; i++){
    for(int j=0; j<leng; j++){
      if(i==0 && j==0) T[i][j] = map[i][j];
      else if(i==0) T[i][j] = T[i][j-1] + map[i][j];
      else if (j==0) T[i][j] = T[i-1][j] + map[i][j];
      else{
        T[i][j] = max(T[i-1][j], T[i][j-1])+map[i][j];
      }
    }
  }

  printf("%d\n", T[lens-1][leng-1]);

  return 0;
}
