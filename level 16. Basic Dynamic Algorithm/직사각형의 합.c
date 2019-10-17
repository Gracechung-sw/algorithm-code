#include <stdio.h>

int lens, leng, q;
int T[1010][1010];
int map[1010][1010];

int main() {

  //Please Enter Your Code Here
  scanf("%d %d %d", &lens, &leng, &q);

  for(int i=1; i<=lens; i++){
    for(int j=1; j<=leng; j++){
      scanf("%d", &map[i][j]);
      T[i][j] = T[i-1][j]+T[i][j-1]-T[i-1][j-1]+map[i][j];
    }
  }

  for(int i=1; i<=q; i++){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a++, b++, c++, d++;

    int ans= T[c][d] - T[a-1][d] - T[c][b-1] + T[a-1][b-1];
    printf("%d\n", ans);
  }

  return 0;
}
