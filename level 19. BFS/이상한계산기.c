#include <cstdio>
#include <queue>
using namespace std;

int n;
int num;
queue <int> Q;
int check[1000000];

void BFS(){
  int start = 1;
  Q.push(start);
  check[start] = 1;

  while(1){
    int size = Q.size();

    while(size--){
      start = Q.front();
      Q.pop();

      if(start == n){
        printf("%d\n", num);
        return;
      }

      int next = start*2;
      if(check[next]==0 && (1<=next && next<=99999)){
        Q.push(next);
        check[next] = 1;
      }

      next = start/3;
      if(check[next]==0 && (1<=next && next<=99999)){
        Q.push(next);
        check[next] = 1;
      }
    }
    num++;
  }
}

int main(){
  scanf("%d", &n);

  BFS();

  return 0;
}
