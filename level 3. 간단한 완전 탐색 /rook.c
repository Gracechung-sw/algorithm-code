#include <stdio.h>

int map[20][20];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int main(){

  int inx_y, inx_x;

  for(int i=1; i<=8; i++){
    for(int j=1; j<=8; j++){
      scanf("%d ", &map[i][j]);
      if(map[i][j] == 1){
        inx_y = i, inx_x = j;
      }
    }
  }

  for(int di=0; di<4; di++){
    int y = inx_y, x = inx_x;

    while(y != 0 && y != 9 && x != 0 && x!=9){
      y+=dy[di], x+=dx[di];

      if(y==0 || y==9 || x==0|| x==9){
        break;
      }
      else if(map[y][x] == 3){
        break;
      }
      else if(map[y][x] == 2){
        printf("1\n");
        return 0;
      }
    }

  }

  printf("0\n");
  return 0;
}
