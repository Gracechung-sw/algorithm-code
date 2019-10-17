#include <stdio.h>
int n;

void Bin(int x){
  if(x==0 || x==1)
    printf("%d", x);
  else{
    Bin(x/2);printf("%d", x%2);
  }
}

int main() {

  //Please Enter Your Code Here
  scanf("%d", &n);
  Bin(n);

  return 0;
}
