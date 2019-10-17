#include <stdio.h>

long long int n, k;
long long int start, end, mid;
long long int sum;

int main(){
  scanf("%lld %lld", &n, &k);

  start = 1, end = n*n;

  if(k==1){
    printf("1\n");
    return 0;
  }
  else if(k==n*n){
    printf("%d\n", k);
    return 0;
  }
  else{
    while(start+1 < end){
      mid = (start+end)/2;

      sum = 0;
      for(int i=1; i<=n; i++){
        if(i*n < mid)
          sum += n;
        else
          sum += mid/i;
      }
      if(sum < k)
        start = mid;
      else
        end = mid;
    }
    printf("%lld\n", end);
  }

  return 0;

}
