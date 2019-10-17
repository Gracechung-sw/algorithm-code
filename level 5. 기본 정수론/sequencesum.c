#include <stdio.h>

int map[1010][1010];

int main() {

  //Please Enter Your Code Here
  int n;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      scanf("%d", &map[i][j]);
    }
  }

  int result;
  for(int i=1; i<=n; i++){

    if(i==n-1){
      result = map[n-1][n-2]-result;
      printf("%d ", result);
    }
    else if(i==n){
      result = map[n-1][n]-result;
      printf("%d ", result);
    }
    else{
      result = (map[i+1][i]+map[i+2][i]-map[i+1][i+2])/2;
      printf("%d ", result);
    }
  }


  return 0;
}
