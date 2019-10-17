#include <stdio.h>

int n, x, y;
int check[100010];
struct Tree{
  int connect[1010];
  int len = 0;

  void push(int y){
    connect[len++] = y;
  }
};

Tree tree[1010];

int getResult(int node, int height){
  //root의 자식으로 내려가보고 그게 x나 y면 멈추고 그때의 거리인 height를 반환
  if(node == y)
    printf("%d\n", height);

  else{
    for(int i=0; i<tree[node].len; i++){
      int value = tree[node].connect[i];

      if(check[value]==1)
        continue;
      else{
        check[value] = 1;
        getResult(value, height+1);
        //check[value] = 0;
      }
    }
  }


}

int main() {

  //Please Enter Your Code Here
  scanf("%d %d %d", &n, &x, &y);

  for(int i=0; i<n; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    tree[a].push(b);
    tree[b].push(a);
  }

  check[x] = 1;
  getResult(x, 0);

  return 0;
}
