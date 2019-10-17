#include <stdio.h>

int n;
bool check[300000];

int getPrimenum(int x){
  int cnt = 0;
  for(int i=x+1; i<=2*x; i++){
    if(check[i] == 0)
      cnt++;
  }
  return cnt;
}


int main() {

  //Please Enter Your Code Here
  check[1] = 1;
  for(int i=2; i<250000; i++){
    if(check[i] == 0){//소수인거 있으면
      for(int j=2; j<250000/i; j++){
        check[i*j]=1;//그것의 배수는 다 소수 아닌걸로 해준다.
      }
    }
  }

  while(1){
    scanf("%d", &n);

    if(n==0)
      return 0;

    int cnt = getPrimenum(n);
    printf("%d\n", cnt);
  }

  return 0;
}
