#include <stdio.h>
#include <string.h>

int main() {

  char arr[1010];
  fgets(arr, 1010, stdin);

  int len = strlen(arr);
  for(int i=len-1; i>=0; i--)
    printf("%c", arr[i]);

  return 0;
}
