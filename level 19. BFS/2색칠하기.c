#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int node, edge;
int check[10010];
vector <int> myGraph[10010];
queue <int> Q;
int color = 1;

void BFS(){
  Q.push(0);
  check[0] = color;

  while(!Q.empty()){
    int size = Q.size();

    while(size--){
      int current = Q.front(); Q.pop();

      for(int i=0; i<myGraph[current].size(); i++){
        int next = myGraph[current][i];

        if(check[next] == 0){
          Q.push(next);
          check[next] = color*-1;
        }
        else if(check[next] == color){
          printf("NO\n");
          return;
        }
      }
    }
    color *= -1;
  }

  printf("YES\n");
  return;

}


int main(){
  scanf("%d %d", &node, &edge);

  for(int i=1; i<=edge; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    myGraph[a].push_back(b);
    myGraph[b].push_back(a);
  }

  BFS();

  return 0;
}
