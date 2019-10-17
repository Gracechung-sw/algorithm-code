#include <stdio.h>

const int Max = 100010;
int n;
int button[Max][3];
int T[Max][3];

int max(int a, int b){
  return (a>b)? a:b;
}

int main() {

  //Please Enter Your Code Here
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    for(int j=0; j<3; j++){
      scanf("%d", &button[i][j]);
    }
  }
  T[0][0] = button[0][0], T[0][1] = button[0][1], T[0][2] = button[0][2];

  for(int i=1; i<n; i++){
    for(int j=0; j<3; j++){
      T[i][j] = max(T[i-1][(j+1)%3], T[i-1][(j+2)%3])+button[i][j];
    }
  }

  int ans;
  ans = max(T[n-1][0], max(T[n-1][1], T[n-1][2]));

  printf("%d", ans);

  return 0;
}
