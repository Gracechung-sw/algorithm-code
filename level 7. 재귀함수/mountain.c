#include <stdio.h>
int n;

void Mount(int x){
  if(x==1)
    printf("%d", x);
  else{
    Mount(x-1);
    printf("%d", x);
    Mount(x-1);
  }
}

int main() {

  //Please Enter Your Code Here
  scanf("%d", &n);
  Mount(n);

  return 0;
}
