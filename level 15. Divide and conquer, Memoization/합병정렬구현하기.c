#include <stdio.h>

const int Max= 100010;
int n;
int arr[Max];

void Merging(int arr[], int s1, int e1, int s2, int e2){
  int p = s1, q = s2;
  int temp[Max], temp_inx=0;

  while(p<=e1 && q<=e2){
    if(arr[p] <= arr[q]){
      temp[temp_inx++] = arr[p];
      p++;
    }
    else{
      temp[temp_inx++] = arr[q];
      q++;
    }
  }

  if(p>e1){
    for(int i=q; i<=e2; i++){
      temp[temp_inx++] = arr[i];
    }
  }
  if(q>e2){
    for(int i=p; i<=e1; i++){
      temp[temp_inx++] = arr[i];
    }
  }

  for(int i=0; i<temp_inx; i++){
    arr[i+s1] = temp[i];
  }
}

void Mergesort(int arr[], int s, int e){
  if(s==e)
    return;

  else{
    int mid = (s+e)/2;
    Mergesort(arr, s, mid);
    Mergesort(arr, mid+1, e);
    Merging(arr, s, mid, mid+1, e);
  }
}


int main() {
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  Mergesort(arr, 0, n-1);

  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}
