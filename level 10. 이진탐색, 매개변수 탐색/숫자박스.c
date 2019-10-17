#include <stdio.h>
#include <algorithm>
using namespace std;

int n, m;
int arr[1000010];

bool BS(int arr[], int s, int e, int value){
  if(s>e) return false;

  else if(s==e){
    if(arr[s]== value) return true;
    else return false;
  }

  else{
    int mid = (s+e)/2;
    if(arr[mid] == value) return true;
    else if(arr[mid] > value) BS(arr, s, mid-1, value);
    else BS(arr, mid+1, e, value);
  }
}

int main() {

  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  sort(arr, arr+n);

  scanf("%d", &m);
  for(int i=0; i<m; i++){
    int question;
    scanf("%d", &question);

    printf("%d\n", BS(arr, 0, n-1, question));
  }

  return 0;
}
