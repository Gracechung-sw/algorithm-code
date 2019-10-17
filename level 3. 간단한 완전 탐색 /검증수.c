#include <stdio.h>

int main() {
  int arr[10] = {0};
  int sum = 0;

  for(int i=1; i<=5; i++){
    scanf("%d", &arr[i]);
    sum += arr[i] * arr[i];
  }

  printf("%d\n", sum%10);
  //Please Enter Your Code Here

  return 0;
}
