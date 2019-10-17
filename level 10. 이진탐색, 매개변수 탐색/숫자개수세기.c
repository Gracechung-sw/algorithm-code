#include <stdio.h>
#include <algorithm>
using namespace std;

const int Max = 100010;
int n, q;
long long int arr[Max];

int BS(int start, int end, long long int value){
  if(start > end)
    return -1;
  else if(start == end){
    if(arr[start] == value)
      return start;
    else
      return -1;
  }

  else{
    int mid = (start+end)/2;

    if(arr[mid] == value)
      return mid;
    else if(arr[mid] > value)
      BS(start, mid-1, value);
    else
      BS(mid+1, end, value);
  }
}

int main(){
  scanf("%d %d", &n, &q);

  for(int i=0; i<n; i++){
    scanf("%lld", &arr[i]);
  }

  sort(arr, arr+n);

  for(int i=1; i<=q; i++){

    long long int num;
    scanf("%lld", &num);

    int position = BS(0, n-1, num);

    if(position == -1)
      printf("0\n");

    else{
      int i= position;
      while(i>=0){
        if(arr[i] != num)
          break;
        i--;
      }
      int j = position;
      while(j<n){
        if(arr[j] != num)
          break;
        j++;
      }
      printf("%d\n", j-i-1);
    }

  }

  return 0;
}
