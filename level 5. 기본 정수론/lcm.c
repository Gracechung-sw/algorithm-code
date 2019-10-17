#include <stdio.h>

long long int getGCD(int a, int b){
  int r;

  while(1){
    r = a%b;
    if(r==0)
      return b;

    a=b;
    b=r;
  }
}

int main() {

  //Please Enter Your Code Here
  long long int A, B;
  scanf("%lld %lld", &A, &B);

  long long int GCD = getGCD(A, B);

  long long int LCM = A*B/GCD;

  printf("%lld\n", LCM);

  return 0;
}
