#include <stdio.h>
#include <string.h>

int opt[20];
bool check[20];
char arr[20];
char max[20];
char min[20] = "9999999999999";
int k;

void Inequal(int len){
  if(len >k){
    scanf("*%s\n", arr);

    if(strcmp(arr, max) >0)
      strcpy(max, arr);
    if(strcmp(arr, min) < 0)
      strcpy(min, arr);
  }

  else{
    bool flag = false;

    if(opt[len] == '<'){
      for(int i=arr[len-1]-'0'+1; i<=9; i++){
        if(check[i] == 0){
          flag = true;
          arr[len] = i+'0';
          check[i] = 1;
          Inequal(len+1);
          check[i] = 0;
        }
      }
    }
    else{//opt[len] == '>'
      for(int i=0; i<arr[len-1]-'0'; i++){
        if(check[i]==0){
          flag = true;
          arr[len] = i+'0';
          check[i] = 1;
          Inequal(len+1);
          check[i] = 0;
        }
      }
    }

    if(flag== false)
      return;
  }

}

int main(){
  scanf("%d", &k);

  for(int i=1; i<=k; i++){
    scanf(" %c", &opt[i]);
  }

  for(int i=0; i<=9; i++){
    arr[0] = i+'0';
    check[i] = 1;

    Inequal(1);
    check[i] = 0;
  }

  printf("%s\n", max);
  printf("%s\n", min);

  return 0;
}
