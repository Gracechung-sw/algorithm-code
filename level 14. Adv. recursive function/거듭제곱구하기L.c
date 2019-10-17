#include <stdio.h>

const int R = 10007;
int n;
long long int m;


long long int Mod(long long int x){
  if(x==1)
    return n % R;

  else{
    if(x%2==1)
      return (Mod(1) * Mod((x-1)/2) * Mod((x-1)/2)) % R;

    else
      return (Mod(x/2)* Mod(x/2)) % R;
  }
}

int main(){
  scanf("%d %lld", &n, &m);

  printf("%lld", Mod(m));

  return 0;
}
