#include <stdio.h>
#include <string.h>

char arr[1010];

int main() {

  //Please Enter Your Code Here
  fgets(arr, 1010, stdin);

  int len = strlen(arr);

  for(int i=0; i<len; i++){
    if('a'<=arr[i] && arr[i]<='z')
      printf("%c", arr[i]-'a'+'A');

    else if('A'<=arr[i] && arr[i]<='Z')
      printf("%c", arr[i]-'A'+'a');

    else
      printf("%c", arr[i]);
  }

  return 0;

}
    
