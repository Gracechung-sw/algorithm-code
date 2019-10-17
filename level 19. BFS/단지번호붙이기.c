#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;

int n;
int check[40][40];
int map[40][40];
int cnt[100];

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

struct position{
  int y, x;
};

queue <position> Q;

void BFS(int y, int x, int value){
  position now = {y, x};

  Q.push(now);
  check[y][x] = value;

  while(!Q.empty()){
    now = Q.front();
    Q.pop();

    for(int di=0; di<4; di++){
      position tempnow = {now.y+dy[di], now.x+dx[di]};

      if(map[tempnow.y][tempnow.x]==1 && check[tempnow.y][tempnow.x]==0){
        Q.push(tempnow); check[tempnow.y][tempnow.x] = value;
      }
    }
  }
}

int main(){
  scanf("%d", &n);

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      scanf("%1d", &map[i][j]);
    }
  }

  int dan = 0;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(map[i][j]==1 && check[i][j]==0){
        dan+=1;
        BFS(i, j, dan);
      }
    }
  }

  // ///
  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=n; j++){
  //     printf("%d ", check[i][j]);
  //   }printf("\n");
  // }
  // ///

  printf("%d\n", dan);

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(check[i][j]==0)
        continue;
      cnt[check[i][j]]++;
    }
  }

  sort(cnt, cnt+(dan+1));

  for(int i=1; i<=dan; i++)
    printf("%d\n", cnt[i]);


  return 0;

}
