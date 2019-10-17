#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int map[20][20] = {0, };

  scanf("%d", &n);

  for(int i=1; i<=n; i++){
    //행
    for(int j=1; j<=10; j++){
      if(map[i][j]==0)
        map[i][j] = 1;
      else
        map[i][j] = 0;
    }
    //열
    for(int j=1; j<=10; j++){
      if(map[j][i] == 0)
        map[j][i] = 1;
      else
        map[j][i] = 0;
    }
    //중복
    if(map[i][i]==1)
      map[i][i] = 0;
    else
      map[i][i] = 1;
  }

  for(int i=1; i<=10; i++){
    for(int j=1; j<=10; j++){
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }

  return 0;
}
