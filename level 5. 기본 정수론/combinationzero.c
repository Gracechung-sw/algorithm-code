#include <stdio.h>
int n, m;
int num2, num5;

void Son(){

  for(int i=n-m+1; i<=n; i++){
    int inx = i;

    while(inx%2==0 || inx%5 ==0){

      if(inx%2 == 0){
        num2++; inx/=2;
      }
      if(inx%5==0){
        num5++; inx/=5;
      }
    }
  }
  //printf("%d %d\n", num2, num5);

}

void Mom(){
  for(int i=m; i>=1; i--){
    int inx = i;

    while(inx%2==0 || inx%5==0){
      if(inx%2==0){
        num2--; inx/=2;
      }
      if(inx%5==0){
        num5--; inx/=5;
      }
    }
  }
  //printf("%d %d\n", num2, num5);
}

int main() {

  //Please Enter Your Code Here
  scanf("%d %d", &n, &m);

  Son();
  Mom();

  //printf("num2:%d, num5:%d\n", num2, num5);

  if(num2<=0|| num5<=0){
    printf("0\n");
  }
  else{
    if(num2 >= num5)
      printf("%d\n", num5);
    else
      printf("%d\n", num2);
  }

  return 0;
}
