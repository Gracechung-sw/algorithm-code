#include <stdio.h>

int main(){

  int n, s;
  scanf("%d %d", &n, &s);

  int map[300][300] = {0, };

  //저장
  for(int i=1; i<=n; i++){
    for(int j=1; j<=2*i-1; j++){
      map[i][j] = s++;
      if(s>9)
        s = 1;
    }
  }

  //출력
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
      printf(" ");
    }
    if(i%2 == 1){
      for(int j=2*i-1; j>=1; j--){
        printf("%d", map[i][j]);
      }
    }
    else{
      for(int j=1; j<=2*i-1; j++){
        printf("%d", map[i][j]);
      }
    }
    printf("\n");
  }


}
