#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int arr[40][40];
  int n, m;

  scanf("%d %d", &n, &m);

  for(int i=0; i<=n; i++){
    for(int j=0; j<=n; j++){
      if(j==0 || j==i)
        arr[i][j] = 1;
      else
        arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
    }
  }

  printf("%d", arr[n][m]);

  return 0;
}
