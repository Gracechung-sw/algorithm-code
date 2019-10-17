#include <cstdio>
#include <algorithm>
using namespace std;

int n;
int map[40][40];
int check[40][40];
int dan;
int cnt[1600];

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};


void DFS(int y, int x){
  check[y][x] = 1;
  cnt[dan]++;

  for(int di=0; di<4; di++){
    int tempy = y+dy[di], tempx = x+dx[di];

    if(map[tempy][tempx] == 1 && check[tempy][tempx] ==0){
      check[tempy][tempx] = 1;

      DFS(tempy, tempx);
    }
  }
}


int main(){
  scanf("%d", &n);

  for(int i=0; i<=n+1; i++){
    for(int j=0; j<=n+1; j++){
      if(i==0||i==n+1||j==0||j==n+1)
        map[i][j] = -1;
      else
        scanf("%1d",&map[i][j]);
    }
  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(map[i][j] == 1 && check[i][j] == 0){
        DFS(i, j);
        dan++;
      }
    }
  }

  printf("%d\n", dan);

  sort(cnt, cnt+dan);
  for(int i=0; i<dan; i++){
    printf("%d\n", cnt[i]);
  }

  return 0;
}
