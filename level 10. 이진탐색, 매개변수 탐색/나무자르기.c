#include <stdio.h>

long long int n, m;
long long tree[1000010];

bool check(long long int chop){
  long long int sum = 0;

  for(int i=0; i<n; i++){
    if(tree[i] > chop){
      sum += tree[i]-chop;
    }
  }

  if(sum >= m)
    return true;
  else
    return false;
}

int main(){
  scanf("%lld %lld", &n, &m);

  for(int i=0; i<n; i++){
    scanf("%lld", &tree[i]);
  }

  long long int start = 0, end = 1000000000;
  while(start+1 < end){
    long long int mid = (start+end)/2;

    if(check(mid) == true)
      start = mid;
    else
      end = mid;
  }
  printf("%lld", start);

  return 0;
}
