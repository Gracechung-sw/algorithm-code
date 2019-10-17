#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  scanf("%d", &n);

  int sum = 1, i=1;
  while(1){
    if(sum >= n)
      break;

    sum += i*6;
    i++;
  }

  printf("%d", i);

  return 0;
}
