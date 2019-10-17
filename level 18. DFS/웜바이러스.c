#include <cstdio>
#include <vector>
using namespace std;

int node, edge;
vector <int> myGraph[110];
bool check[110];
int cnt;

void DFS(int x){
  check[x] = 1;
  cnt++;

  for(int i=0; i<myGraph[x].size(); i++){
    int next = myGraph[x][i];

    if(check[next] == 0){
      DFS(next);
    }
  }
}

int main(){
  scanf("%d", &node);
  scanf("%d", &edge);

  for(int i=0; i<edge; i++){
    int a, b;

    scanf("%d %d", &a, &b);
    myGraph[a].push_back(b);
    myGraph[b].push_back(a);
  }

  DFS(1);

  printf("%d\n", cnt-1);

  return 0;
}
