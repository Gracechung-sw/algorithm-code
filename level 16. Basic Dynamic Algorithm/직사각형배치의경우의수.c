#include <cstdio>
using namespace std;

int n;
int T[110];
const int R = 1000007;

int main(){
  scanf("%d", &n);

  T[1] = 1, T[2] = 2;

  for(int i=3; i<=n; i++){
    T[i] = (T[i-1]%R + T[i-2]%R)%R;
  }

  printf("%d\n", T[n]);

  return 0;
}
