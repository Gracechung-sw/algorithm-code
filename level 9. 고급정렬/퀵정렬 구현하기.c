#include <stdio.h>

const int Max = 100010;
int n;
int arr[Max];
int myLeft[Max], myRight[Max];

int getLeft(int arr[], int s, int e, int value, int Left[]){
  int inx = 0;
  for(int i=s; i<=e; i++){
    if(arr[i] <= value){
      Left[inx++] = arr[i];
    }
  }
  return inx;
}

int getRight(int arr[], int s, int e, int value, int Right[]){
  int inx = 0;
  for(int i=s; i<=e; i++){
    if(arr[i] > value){
      Right[inx++] = arr[i];
    }
  }
  return inx;
}

void Quicksort(int arr[], int s, int e){
  if(s>=e)
    return;

  else{
    int pivot = arr[s];

    //int myLeft[Max], myRight[Max];
    int left_cnt = getLeft(arr, s+1, e, pivot, myLeft);
    int right_cnt = getRight(arr, s+1, e, pivot, myRight);

    for(int i=0; i<left_cnt; i++){
      arr[s+i] = myLeft[i];
    }
    arr[s+left_cnt] = pivot;
    for(int i=0; i<right_cnt; i++){
      arr[s+left_cnt+1+i] = myRight[i];
    }

    Quicksort(arr, s, s+left_cnt-1);
    Quicksort(arr, s+left_cnt+1, e);
  }
}

int main() {

  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  Quicksort(arr, 0, n-1);

  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}
