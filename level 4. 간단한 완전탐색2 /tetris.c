#include <stdio.h>

int main(){
  int leng, lens;
  int map[30][30];
  int sum;
  int total;
  int max=0;
  int inx=-1;

  scanf("%d %d", &leng, &lens);

  for(int i=0; i<=lens; i++){
    for(int j=0; j<leng; j++){
      map[i][j] = 1;
    }
  }
  for(int i=0; i<lens; i++){
    for(int j=0; j<leng; j++){
      scanf("%d", &map[i][j]);
    }
  }

  for(int j=0; j<leng; j++){
    for(int i=0; i<=lens; i++){
      if(map[i][j] == 1){
        if(i-1 >= 3){
          map[i-1][j] = 1;
          map[i-2][j] = 1;
          map[i-3][j] = 1;
          map[i-4][j] = 1;

          total = 0;
          for(int i=0; i<lens; i++){
            sum = 0;
            for(int j=0; j<leng; j++){
              sum += map[i][j];
            }
            if(sum == leng)
              total++;
          }

          if(max < total){
            max = total;
            inx = j;
          }

          map[i-1][j] = 0;
          map[i-2][j] = 0;
          map[i-3][j] = 0;
          map[i-4][j] = 0;
        }
        break;
      }
    }
  }

  if(inx==-1 || max == 0)
    printf("0 0\n");
  else
    printf("%d %d", inx+1, max);

  return 0;
}
