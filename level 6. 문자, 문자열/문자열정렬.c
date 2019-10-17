#include <stdio.h>
#include <string.h>

int main() {

  //Please Enter Your Code Here
  int n;
  char arr[110][110];
  char temp[110];
  int min = 0;

  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%s", arr[i]);
  }

  for(int i=0; i<n; i++){
    min = i;
    for(int j=i; j<n; j++){
      if(strcmp(arr[j], arr[min]) < 0){
        min = j;
      }
    }
    strcpy(temp, arr[i]);
    strcpy(arr[i], arr[min]);
    strcpy(arr[min], temp);
  }

  for(int i=0; i<n; i++){
    printf("%s\n", arr[i]);
  }

  return 0;
}
