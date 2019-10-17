#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

const int Max = 1010;
int node, edge;
int map[Max][Max];
int checkDFS[Max];
int checkBFS[Max];
queue <int> Q;

int DFS(int x){
  checkDFS[x] = 1;
  printf("%d ", x);

  for(int i=0; i<node; i++){
    if(map[x][i] == 1){
      if(checkDFS[i] == 0){
        DFS(i);
      }
    }
  }
}

void BFS(){
  Q.push(0);
  checkBFS[0] = 1;

  while(!Q.empty()){
    int current = Q.front(); Q.pop();
    printf("%d ", current);

    for(int i=0; i<node; i++){
      if(map[current][i] == 1){
        if(checkBFS[i] == 0){
          Q.push(i);
          checkBFS[i] = 1;
        }
      }
    }
  }

}

int main(){
  scanf("%d %d", &node, &edge);

  for(int i=1; i<=edge; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    map[a][b] = 1;
    map[b][a] = 1;
  }

  DFS(0);printf("\n");
  BFS(); printf("\n");

  return 0;
}
