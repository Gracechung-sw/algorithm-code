#include <stdio.h>

int main(){

  int arr[20];
  int cnt[1010] = {0};
  int sum = 0;
  int max1 = 0;

  for(int i=1; i<=10; i++){
    scanf("%d", &arr[i]);

    cnt[arr[i]]++;

    sum += arr[i];

    if(max1 < arr[i]){
      max1 = arr[i];
    }
  }
  printf("%d\n", sum/10);

  int max2 = 0;
  int inx = 0;
  for(int i=1; i<=max1; i++){
    if(max2 < cnt[i]){
      max2 = cnt[i];
      inx = i;
    }
  }

  printf("%d\n", inx);

  return 0;



}
