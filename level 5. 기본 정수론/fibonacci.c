#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int arr[100];

  scanf("%d", &n);

  arr[0] = 0, arr[1] = 1;

  for(int i=2; i<=n; i++)
    arr[i] = arr[i-1]+arr[i-2];

  printf("%d\n", arr[n]);

  return 0;
}
