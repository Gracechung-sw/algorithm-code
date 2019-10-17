#include <stdio.h>
#include <string.h>

char arr[100010];

int main() {

  //Please Enter Your Code Here
  fgets(arr, 100010, stdin);
  int len = strlen(arr);

  for(int i=0; i<len; i++){
    if(arr[i] == ' ')
      continue;
    else
      printf("%c", arr[i]);
  }

  return 0;
}
