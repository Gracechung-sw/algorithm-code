#include <stdio.h>
int n;
int arr[20];
int temp[20];
char opt[20];
int cnt;

void getSum(){

  for(int i=0; i<n; i++){
    temp[i] = i+1;
  }

  //1. . 계산
  for(int i=0; i<n-1; i++){
    if(opt[i] == '.'){
      for(int j=i; j>=0; j--){
        if(temp[j] != 0){
          if(temp[i+1] < 10){
            temp[j] = temp[j]*10+temp[i+1];
            temp[i+1] = 0;
          }
          else if(temp[i+1]>=10){
            temp[j] = temp[j]*100+temp[i+1];
            temp[i+1] = 0;
          }
          break;
        }
      }
    }
  }
  //2. sum 계계산
  int sum = temp[0];
  for(int i=0; i<n-1; i++){
    if(opt[i] == '+'){
      sum += temp[i+1];
    }
    else if(opt[i] == '-'){
      sum -= temp[i+1];
    }
  }

  //3.
  if(sum == 0){
    cnt++;
    if(cnt <= 20){
      for(int i=0; i<n-1; i++){
        printf("%d %c ", i+1, opt[i]);
      }printf("%d\n", n);
    }
  }
}

void Dessert(int inx){
  if(inx >= n-1){
    getSum();
  }
  else{
    opt[inx] = '+';
    Dessert(inx+1);
    opt[inx] = '-';
    Dessert(inx+1);
    opt[inx] = '.';
    Dessert(inx+1);
  }
}

int main() {
  scanf("%d", &n);
  Dessert(0);
  printf("%d\n", cnt);

  return 0;
}
