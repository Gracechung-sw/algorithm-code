#include <stdio.h>
int n, k;
int arr[40];

void Tobin(int len, int one){
  if(len>=n){
    if(one == k){
      for(int i=0; i<n; i++){
        printf("%d", arr[i]);
      }printf("\n");
    }
    else
      return;
  }
  else{//len<n
    if(one >= k){
      for(int i=0; i<n; i++){
        printf("%d", arr[i]);
      }printf("\n");
    }
    else{//one<n
      arr[len]=1;
      Tobin(len+1, one+1);
      arr[len]=0;
      Tobin(len+1, one);
    }
  }
}

int main() {

  //Please Enter Your Code Here
  scanf("%d %d", &n, &k);
  Tobin(0, 0);

  return 0;
}
