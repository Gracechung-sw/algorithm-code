#include <stdio.h>
int son1, son2;
int mom1, mom2;
int totalson, totalmom;

int getGCD(int a, int b){
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
  scanf("%d %d",&son1, &mom1);
  scanf("%d %d", &son2, &mom2);

  totalmom = mom1*mom2/getGCD(mom1, mom2);

  totalson = (son1*(totalmom/mom1))+(son2*(totalmom/mom2));

  int GCD = getGCD(totalmom, totalson);

  printf("%d %d", totalson/GCD, totalmom/GCD);

  return 0;
}
