#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int arr[20];

  int max = -1, inx = 0;

  for(int i=1; i<=9; i++){
    scanf("%d", &arr[i]);
    if(max < arr[i]){
      max = arr[i];
      inx = i;
    }
  }

  printf("%d\n%d\n", max, inx);

  return 0;
}
