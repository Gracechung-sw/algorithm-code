#include <stdio.h>

int map[10][10];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int main(){

  for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
      scanf("%d", &map[i][j]);
    }
  }

  for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
      bool flag = false;
      for(int di=0; di<4; di++){
        int tempy = i+dy[di], tempx = j+dx[di];

        if(tempy==0 || tempy==6|| tempx==0 || tempx==6)
          continue;
        else{
          if(map[tempy][tempx] <= map[i][j])
            flag = true;
        }
      }
      if(flag==true)
          printf("%d ", map[i][j]);
      else
        printf("* ");
    }printf("\n");
  }

  return 0;
}
