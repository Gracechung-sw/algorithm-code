#include <stdio.h>

const int Max = 100010;
int n;
int T[Max];
int min;

int BS(int s, int e, int value){
  while(s+1<e){
    int mid = (s+e)/2;

    if(mid*mid <= value)
      s = mid;
    else
      e = mid;
  }
  return s;
}

int main() {

  //Please Enter Your Code Here
  scanf("%d\n", &n);

  T[0]=0;
  for(int i=1; i<=n; i++){
    min = 999999;

    int result = BS(1, 400, i);

    for(int j=result; j>=1; j--){
      int temp = T[i-j*j]+1;
      if(min >temp)
        min = temp;
    }
    T[i] = min;
  }

  printf("%d\n", T[n]);

  return 0;
}
