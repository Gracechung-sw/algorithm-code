#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

const int Max = 10010;
int check[Max];
vector <int> map[Max];
int n, m;


bool DFS(int start, int color){
  check[start] = color;

  for(int i=0; i<map[start].size(); i++){
    int value = map[start][i];

    if(check[value] == 0){
      DFS(value, color*-1);
    }
    else if(check[value] == color){
      return true;
    }
  }
   return false;

}

int main(){
  scanf("%d %d", &n, &m);

  for(int i=1; i<=m; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    map[a].push_back(b);
    map[b].push_back(a);
  }

  int result = DFS(n-1, 1);

  if(result == true){
    printf("NO\n");
  }
  else{
    printf("YES\n");
  }

  return 0;



}
