#include <cstdio>
using namespace std;

int n;
int T[100010];

int main(){
  scanf("%d", &n);

  int sum = 0; T[0]=0;
  for(int i=1; i<=n; i++){
    if(i<=3){
      sum += T[i-1];
      T[i] = sum +1;
    }
    else{
      for(int j=i-3; j<=i-1; j++){
        T[i] += T[j]%1000007;
      }
      T[i] %= 1000007;
    }

  }

  printf("%d\n", T[n]);

  return 0;
}
