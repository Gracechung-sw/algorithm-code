#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n, num;
  scanf("%d", &n);

  int sum = 0;
  for(int i=1; i<=n; i++){
    scanf("%d", &num);

    num*=i;
    printf("%d ", num-sum);
    sum = num;

  }

  return 0;
}
