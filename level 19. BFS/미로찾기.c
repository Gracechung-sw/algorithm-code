#include <cstdio>
#include <queue>
using namespace std;

const int Max = 1010;
int lens, leng;
int map[Max][Max];
int check[Max][Max];
int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};
struct position{
  int y, x;
};

queue <position> Q;

void BFS(int y, int x){
  position now = {y, x};
  Q.push(now);
  check[now.y][now.x] = 1;

  while(!Q.empty()){
    now = Q.front();
    Q.pop();

    if(now.y == 1 && now.x == leng){
        printf("%d\n", check[now.y][now.x]-1);
        return;
    }

    for(int di=0; di<4; di++){
      position temp = {now.y + dy[di], now.x +dx[di]};

      if((1<=temp.y&& temp.y<=lens) && (1<=temp.x && temp.x<=leng)){

        if(map[temp.y][temp.x]==0 && check[temp.y][temp.x]==0){
          Q.push(temp);
          check[temp.y][temp.x] = check[now.y][now.x]+1;
        }
      }
    }
  }
}

int main(){
  scanf("%d %d", &lens, &leng);

  for(int i=1; i<=lens; i++){
    for(int j=1; j<=leng; j++){
      scanf("%d", &map[i][j]);
    }
  }

  BFS(lens, 1);

  return 0;
}
