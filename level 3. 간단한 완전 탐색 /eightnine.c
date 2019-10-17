#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n, m;
  int arr[110][110] = {0, };

  scanf("%d %d", &n, &m);
  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i=1; i<=n; i++){
    for(int j=m; j>=1; j--){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }


  return 0;
}
