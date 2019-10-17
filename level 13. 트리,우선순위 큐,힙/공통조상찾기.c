#include <stdio.h>
int n, x, y;
int mom[1010];
int xlen, ylen;
int xmom[1010], ymom[1010];

int main(){
  scanf("%d %d %d", &n, &x, &y);

  for(int i=1; i<n; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    mom[b] = a; //b의 엄마는 a다.
  }

  while(1){
    int nx = mom[x];
    xmom[xlen++] = nx;
    x = nx;

    if(x==0)
      break;
  }

  while(1){
    int ny = mom[y];
    ymom[ylen++] = ny;
    y = ny;

    if(y==0)
      break;
  }

  for(int i=0; i<xlen; i++){
    for(int j=0; j<ylen; j++){
      if(xmom[i] == ymom[j]){
        printf("%d", xmom[i]);
        return 0;
      }
    }
  }

  return 0;
}
