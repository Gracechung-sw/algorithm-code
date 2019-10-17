#include <stdio.h>

long long int a;
long long int start = 0, end = 1000000000;
long long int mid;
long long int result;

int main(){
  scanf("%lld", &a);

  while(start+1 < end){
    mid = (start + end)/2;

    result = mid*(mid+1);

    if(result == a){
      printf("%lld", mid);
      return 0;
    }
    else if(result < a)
      start = mid;
    else
      end = mid;
  }

  printf("%lld", start);

  return 0;
}
