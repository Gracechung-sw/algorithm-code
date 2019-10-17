#include <stdio.h>
#include <algorithm>
using namespace std;

int n, x, y, r;

int Dist(int s, int e){
  return abs(s-x)+abs(e-y);
}

int main(){

  scanf("%d", &n);
  scanf("%d %d %d", &x, &y, &r);

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i==x && j==y){
        printf("x ");
      }
      else{
        int result = Dist(i, j);
        if(result <= r){
          printf("%d ", result);
        }
        else {
          printf("0 ");
        }
      }
    }printf("\n");
  }

  return 0;
}
