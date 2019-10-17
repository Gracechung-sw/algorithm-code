#include <stdio.h>
#include <string.h>

char arr[1010];
int len;
int T[1010][1010];

int min(int a, int b){
  return (a>b)? b:a;
}

int main() {

  //Please Enter Your Code Here
  scanf("%s", arr);
  len = strlen(arr);

  for(int i=len; i>=0; i--){
    for(int j=i; j<=len; j++){
      if(i==0) T[i][j] = j;
      else if(j==0) T[i][j] = i;
      else{
        if(arr[i-1] == arr[j-1])T[i][j] = T[i+1][j-1];
        else T[i][j] = 1+min(T[i][j-1], T[i+1][j]);
      }
    }
  }

  // for(int i=0; i<=len; i++){
  //   for(int j=0; j<=len; j++){
  //     printf("%d ", T[i][j]);
  //   }printf("\n");
  // }

  printf("%d", T[1][len]);

  return 0;
}
