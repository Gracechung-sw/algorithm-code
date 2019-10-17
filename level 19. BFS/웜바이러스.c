#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

const int Max = 110;
int node, edge;
vector <int> arr[Max];
queue <int> Q;
int check[Max];

int main(){
  scanf("%d", &node);
  scanf("%d", &edge);

  for(int i=1; i<=edge; i++){
    int a, b;
    scanf("%d %d", &a ,&b);

    arr[a].push_back(b);
    arr[b].push_back(a);

  }

  Q.push(1);
  check[1] = 1;

  int sum = 0;

  while(!Q.empty()){
    int next = Q.front();
    Q.pop();
    sum++;

    for(int i=0; i<arr[next].size(); i++){
      int y = arr[next][i];

      if(check[y] == 0){
        Q.push(y);
        check[y] =1;
      }
    }
  }

  printf("%d\n", sum-1);

  return 0;

}
