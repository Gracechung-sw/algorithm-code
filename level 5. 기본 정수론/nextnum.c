#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int a, b, c;

  while(1){
    scanf("%d %d %d", &a, &b, &c);

    if(a==0 && b==0)
      break;

    if(2*b == a+c){
      printf("AP %d", (2*c-b));
    }
    else{
      printf("GP %d", (c*c/b));
    }
    printf("\n");
  }

  return 0;
}
