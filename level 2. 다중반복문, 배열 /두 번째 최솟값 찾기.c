#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int arr[20];
  int min = 10000000, mininx = 0;

  for(int i=1; i<=9; i++){
    scanf("%d", &arr[i]);
    if(min > arr[i]){
      min = arr[i];
      mininx = i;
    }
  }
  //printf("%d\n%d\n", min, mininx);
  arr[mininx] = 10000000;
  min = 10000000, mininx = 0;

  for(int i=1; i<=9; i++){
    if(min > arr[i]){
      min = arr[i];
      mininx = i;
    }
  }

  printf("%d\n%d\n", min, mininx);

  return 0;
}
