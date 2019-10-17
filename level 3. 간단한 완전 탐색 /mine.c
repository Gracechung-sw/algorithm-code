#include <stdio.h>

int main(){

  int n, m;
  int y, x;
  int map[110][110] = {0, };

  scanf("%d %d", &n, &m);
  scanf("%d %d", &y, &x);

  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      scanf("%d", &map[i][j]);
    }
  }

  int count = 0;
  if(map[y][x]==1){
    printf("game over\n");
    return 0;
  }
  else{
    for(int i=y-1; i<=y+1; i++){
      for(int j=x-1; j<=x+1; j++){
        if(i==y && j==x)
          continue;
        else{
          if(map[i][j]==1)
            count++;
        }

      }
    }
    printf("%d\n", count);
  }

  return 0;

}
