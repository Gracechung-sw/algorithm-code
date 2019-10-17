#include <stdio.h>

int map[20][20];
int max = -1;
int y, x;

int main(){

  for(int i=1; i<=9; i++){
    for(int j=1; j<=9; j++){
      scanf("%d", &map[i][j]);

      if(max < map[i][j]){
        max = map[i][j];
        y = i, x = j;
      }

    }
  }

  printf("%d\n%d %d\n", max, y, x);

  return 0;
}
