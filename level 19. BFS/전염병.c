#include <cstdio>
#include <queue>
using namespace std;

int n, k;
queue<int> Q;
bool check[100010];
int num;

int main(){
  scanf("%d %d", &n, &k);
  Q.push(k);
  check[k] = 1;

  while(!Q.empty()){
    int current = Q.front();
    Q.pop();
    num++;

    int next = current*2;
    if(1<=next && next<=n &&check[next] == 0){
      Q.push(next);
      check[next] = 1;
    }

    next = current/3;
    if(1<=next && next<=n && check[next] == 0){
      Q.push(next);
      check[next] = 1;
    }

  }

  printf("%d\n", n-num);

  return 0;

}
