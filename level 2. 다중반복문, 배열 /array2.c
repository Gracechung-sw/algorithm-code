#include <stdio.h>

int main(){

  int n, m;
  int map[110][110] = {0, };
  int a, b;

  scanf("%d %d", &n, &m);

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d ", &map[i][j]);
    }
  }

  scanf("%d %d", &a, &b);

  printf("%d\n", map[a][b]);

  return 0;


}
