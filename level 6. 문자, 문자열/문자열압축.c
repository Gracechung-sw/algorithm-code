#include <stdio.h>
#include <string.h>

char arr[1010];
int len;
int cnt[30];

int main() {

  //Please Enter Your Code Here
  scanf("%s", arr);
  len = strlen(arr);

  char start = arr[0];
  for(int i=0; i<=len; i++){
    if(start == arr[i]){
      cnt[arr[i]-'A']++;
    }
    else{
      if(cnt[start-'A']!=1){
        printf("%d", cnt[start-'A']);
      }
      printf("%c", start);
      cnt[start-'A']=0;

      start = arr[i];
      cnt[arr[i]-'A']++;
    }
  }


  return 0;
}
