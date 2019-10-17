#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
long long int arr[100010];
long long int mini = 1000000000;
long long int w1,w2;

void BS(int start, int end, int x){
  if(start >= end){
    if(abs(x+arr[start]) < mini){
      mini = abs(x+arr[start]);
      w1 = x;
      w2 = arr[start];
    }
  }

  else{
    int mid = (start + end)/2;

    long long int value = x+arr[mid];

    if(abs(value) < mini){
      mini = abs(value);
      w1 = x;
      w2 = arr[mid];
    }

    if(value < 0)
      BS(mid+1, end, x);
    else if(value > 0)
      BS(start, mid-1, x);
    else{ // value == 0
      return;
      //printf("%d %d", x, arr[mid]);
    }

  }
}

int main(){
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%lld", &arr[i]);
  }

  sort(arr, arr+n);

  for(int i=0; i<n-1; i++){
    BS(i+1, n-1, arr[i]);
  }
  printf("%lld %lld", w1, w2);

  return 0;
}
