#include <stdio.h>

struct Tree{
  int son[110];
  int len = 0;

  void push(int y){
    son[len++] = y;
  }

};

Tree tree[110];
int a[110], b[110];
int check[110];
int n, r;
int max = -1;

void getResult(int root, int height){
  for(int i=1; i<n; i++){
    if((a[i]==root&&check[b[i]]==1) || (b[i]==root&&check[a[i]]==1)){
      continue;
    }

    else{
      if(a[i] == root){
        if(check[b[i]]==0){
          tree[a[i]].push(b[i]);
          check[b[i]] = 1;
          getResult(b[i], height+1);
          check[b[i]] = 0;
        }
      }
      else if(b[i] == root){
        if(check[a[i]]==0){
          tree[b[i]].push(a[i]);
          check[a[i]] = 1;
          getResult(a[i], height+1);
          check[a[i]] = 0;
        }
      }
    }

  }
  if(max < height)
        max = height;
      return;

}

int main() {

  //Please Enter Your Code Here
  scanf("%d %d", &n, &r);

  for(int i=1; i<n; i++){
    scanf("%d %d", &a[i], &b[i]);
  }

  check[r] = 1;
  getResult(r, 0);

 /*for(int i=0; i<n; i++){
    tree[i].what(i);
    printf("\n");
  }*/

  printf("%d", max);

  return 0;
}
