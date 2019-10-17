#include <stdio.h>

int n;
int T[1000010];
int arr[1000010];
int maxvalue;

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
  maxvalue = T[0];
  for(int i=1; i<n; i++){
    T[i] = max(T[i-1]+arr[i], arr[i]);

    if(maxvalue < T[i])
      maxvalue = T[i];
  }

  printf("%d\n", maxvalue);

  return 0;
}
