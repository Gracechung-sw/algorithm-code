#include<cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int Max = 1010;
int n, m;
vector <int> myGraph[Max];
int check[Max];

bool DFS(int start, int color){
  check[start] = color;

  for(int i=0; i<myGraph[start].size(); i++){
    int next = myGraph[start][i];

    if(check[next] == 0){
      DFS(next, color*-1);
    }
    else if(check[next] == color){
      return false;
    }
  }

  return true;
}

int main(){
  scanf("%d %d", &n, &m);

  for(int i=1; i<=m; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    myGraph[a].push_back(b);
    myGraph[b].push_back(a);
  }

  int result = DFS(1, 1);

  if(result == true){
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }

  return 0;
}
