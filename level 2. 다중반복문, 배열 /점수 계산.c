#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n, arr[110];
  scanf("%d", &n);

  for(int i=1; i<=n; i++){
    scanf("%d", &arr[i]);
  }

  int cnt=0, sum = 0;
  for(int i=1; i<=n; i++){
    if(arr[i] == 0)
      cnt=0;
    else{
      cnt++;
      sum += cnt;
    }
  }

  printf("%d\n", sum);

  return 0;
}
