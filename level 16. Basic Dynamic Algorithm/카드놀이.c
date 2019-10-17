#include <stdio.h>

const int Max = 100010;
int n;
int T[Max];
int arr[Max];

int max(int a, int b){
  return (a>b)? a:b;
}

int main() {

  //Please Enter Your Code Here
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  T[0] = arr[0];
  T[1] = arr[0]+arr[1];
  T[2] = max(arr[0]+arr[1], max(arr[1]+arr[2], arr[0]+arr[2]));

  for(int i=3; i<n; i++){
    T[i] = max(T[i-1], max(T[i-2]+arr[i], T[i-3]+arr[i-1]+arr[i]));
  }

  printf("%d\n", T[n-1]);

  return 0;
}
