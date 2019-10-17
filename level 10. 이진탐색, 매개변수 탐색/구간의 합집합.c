#include <stdio.h>

const int Max = 10010;
int n;
long long int s[Max], e[Max];
long long int start = 1, end = 1000000000, mid;
long long int position;

int main(){
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%lld %lld", &s[i], &e[i]);
  }

  scanf("%lld", &position);

  while(start+1 < end){
    mid = (start+end)/2;

    long long int sum = 0;
    for(int i=0; i<n; i++){
      if(mid < s[i])
        sum += 0;
      else if(e[i] < mid)
        sum += e[i]-s[i]+1;
      else{
        sum += mid-s[i]+1;
      }
    }

    if(sum >=position+1)
      end = mid;
    else
      start = mid;

  }
  printf("%d\n", end);

  return 0;
}
