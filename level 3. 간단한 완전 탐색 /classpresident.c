#include <stdio.h>
int check[1010][1010];

int main(){
  int n;
  int student[1010][20] = {0};

  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    for(int j=1; j<=5; j++){
      scanf("%d", &student[i][j]);
    }
  }

  for(int k=1; k<=5; k++){
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        if(student[i][k] == student[j][k]){
          check[i][j] = 1;
          check[j][i] = 1;
        }
      }
    }
  }

  int max = 0, inx = 0;
  for(int i=1; i<=n; i++){
    int sum = 0;
    for(int j=1; j<=n; j++){
      sum += check[i][j];
    }
    if(max < sum ){
      max = sum;
      inx = i;
    }
  }

  printf("%d\n", inx);

}
