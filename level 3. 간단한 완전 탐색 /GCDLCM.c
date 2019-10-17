#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int a, b;
  int tempa, tempb;
  scanf("%d %d", &a, &b);
  tempa = a, tempb = b;

  int r, gcd;
  while(1){
    r = a%b;
    if(r==0){
      gcd = b;
      break;
    }
    a=b;
    b=r;
  }

  printf("%d\n%d\n", gcd, (tempa*tempb)/gcd);

  return 0;
}
