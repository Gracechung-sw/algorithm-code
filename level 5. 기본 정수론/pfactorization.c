#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  long int n;
  scanf("%ld", &n);

  int start = 2;

  while(n>1){
    if(n%start != 0)
      start++;

    else{
      n/=start;
      printf("%d\n", start);
    }
  }

  return 0;
}
