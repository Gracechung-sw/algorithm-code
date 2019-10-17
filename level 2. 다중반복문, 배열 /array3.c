#include <stdio.h>

int main(){

  int n;
  scanf("%d", &n);

  int map[110][110] = {0, };

  int s=1;
  for(int i=1; i<=n; i++){
    int y=1, x=i;

    while(x != 0){
      map[y][x] = s;
      y++, x--, s++;

    }

  }

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i+1; j++){
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }

  return 0;
}
