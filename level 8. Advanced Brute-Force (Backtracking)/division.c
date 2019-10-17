#include <stdio.h>
int n;
int arr[30];
int cnt;

void Divi(int sum, int start, int inx){
  if(sum == n){
    cnt++;
    for(int i=0; i<inx-1; i++){
      printf("%d+", arr[i]);
    }printf("%d\n", arr[inx-1]);
  }
  else if(sum > n){
    return;
  }
  else{
    for(int i=start; i>=1; i--){
      arr[inx] = i;
      Divi(sum+i, i, inx+1);
    }
  }
}

int main(){
  scanf("%d", &n);
  Divi(0, n-1, 0);
  printf("%d\n", cnt);

  return 0;
}
