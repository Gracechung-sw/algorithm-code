#include <stdio.h>

int main(){

  int n, m;
  scanf("%d %d", &n, &m);

  //int map[110][110] = {0, };

  int s = 1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      printf("%d ", s++);
    }
    printf("\n");
  }

  return 0;
}
