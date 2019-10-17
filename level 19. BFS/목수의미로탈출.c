#include <cstdio>
#include <queue>
using namespace std;

int lens, leng;
int map[1010][1010];
int min = 9999;
bool checktrue[1010][1010];
bool checkfalse[1010][1010];

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

struct position{
  int y, int x;
  bool flag;
  int dist;
}

void BFS(){
  position now = {lens, 1, false, 0};

  Q.push(now);
  checkfalse[now.y][now.x] = 1;

  while(!Q.empty()){
    position now = Q.front();
    Q.pop();


    for(int di=0; di<4; di++){
      position temp = {now.y+dy[di], now.x+dx[di], flag, dist+1};


      if(temp.y==1 && temp.x==leng){
        printf("%d", dist);
        return;
      }


      if(flag == true){
        //if(map[temp.y][temp.x]==0 && checktrue[temp.y][temp.x]==0){
          Q.push(temp);
          checktrue[temp.y][temp.x] = 1;
        //}//더이상 벽이 있는 곳은 못감.
      }//만약 그 위치 까지 온 애가 이미 벽을 하나 깬 애라면


      else{
        if(map[temp.y][temp.x]==0 && checkfalse[temp.y][temp.x]==0){
          Q.push(temp);
          checkfalse[temp.y][temp.x] = 1;
        }
        else if(map[temp.y][temp.x] == 1 && checkfalse[temp.y][temp.x] ==0){
          temp.flag = true;
          Q.push(temp);
          checkfalse[temp.y][temp.x] = 1;
        }
      }//그 위치까지 온 애가 벽을 한번 도 안 깬 애라면


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

  BFS();

  return 0;
}
