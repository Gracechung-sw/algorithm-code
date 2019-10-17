#include <stdio.h>
int n;

int Fac(int x){
  if(x==1)
    return 1;
  else
    return x*Fac(x-1);
}

int main() {

  //Please Enter Your Code Here
  scanf("%d", &n);
  printf("%d\n", Fac(n));

  return 0;
}
