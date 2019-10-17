#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

const int Max = 1010;
int node, edge;
int check[Max];
vector <int> myGraph[Max];
queue <int> Q;

bool BFS(){
  Q.push(1);
  check[1] = 1;

  while(!Q.empty()){
    int current = Q.front();
    Q.pop();

    for(int i=0; i<myGraph[current].size(); i++){
      int next = myGraph[current][i];

      if(check[next] == 0){
        Q.push(next);
        check[next] = check[current]*-1;
      }
      else if(check[next] == check[current])
        return false;
    }
  }

  return true;
}

int main(){
  scanf("%d %d", &node, &edge);

  for(int i=1; i<=edge; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    myGraph[a].push_back(b);
    myGraph[b].push_back(a);
  }


  if(BFS() == false)
    printf("No\n");
  else
    printf("Yes\n");


  return 0;
}
