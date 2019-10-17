#include <stdio.h>

int main(){
  int n;
  int map[110][110] = {0};

  scanf("%d", &n);

  int x, y, leng, lens;
  for(int k=1; k<=n; k++){
    scanf("%d %d %d %d", &x, &y, &leng, &lens);

    for(int i=y; i<y+lens; i++){
      for(int j=x; j<x+leng; j++){
        map[i][j] = k;
      }
    }
  }

  for(int k=1; k<=n; k++){
    int sum = 0;

    for(int i=0; i<110; i++){
      for(int j=0; j<110; j++){
        if(map[i][j] == k)
          sum+=1;
      }
    }

    printf("%d\n", sum);
  }

  return 0;
}
