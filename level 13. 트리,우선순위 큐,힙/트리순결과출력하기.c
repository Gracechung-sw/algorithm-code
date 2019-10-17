#include <stdio.h>

int n;
struct Tree{
  int left;
  int right;
};

Tree tree[110];

void Preorder(int x){
  if(tree[x].left == -1 && tree[x].right == -1)
    printf("%d ", x);
  else{
    printf("%d ", x);
    if(tree[x].left != -1)
      Preorder(tree[x].left);
    if(tree[x].right != -1)
      Preorder(tree[x].right);
  }
}

void Inorder(int x){
  if(tree[x].left == -1 && tree[x].right==-1)
    printf("%d ", x);
  else{
    if(tree[x].left != -1)
      Inorder(tree[x].left);
    printf("%d ", x);
    if(tree[x].right != -1)
      Inorder(tree[x].right);
  }
}

void Postorder(int x){
  if(tree[x].left == -1 && tree[x].right == -1)
    printf("%d ", x);
  else{
    if(tree[x].left != -1)
      Postorder(tree[x].left);
    if(tree[x].right != -1)
      Postorder(tree[x].right);
    printf("%d ", x);
  }
}

int main(){
  scanf("%d", &n);

  for(int i=1; i<=n; i++){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    tree[a].left = b;
    tree[a].right = c;
  }

  Preorder(0);printf("\n");
  Inorder(0); printf("\n");
  Postorder(0); printf("\n");

  return 0;
}
