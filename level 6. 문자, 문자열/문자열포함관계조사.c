#include <stdio.h>
#include <string.h>

char a[1010];
char b[1010];
int lena, lenb;

int main() {

  //Please Enter Your Code Here
  scanf("%s", a); scanf("%s", b);

  lena = strlen(a); lenb = strlen(b);

  bool flag;
  for(int i=0; i<lena; i++){
    if(a[i] == b[0]){
      flag = true;

      for(int j=0; j<lenb; j++){
        if(a[i+j] != b[j]){
          flag = false;
        }
      }

      if(flag == true){
        printf("YES\n");
        return 0;
      }
    }
  }
  printf("NO\n");

  return 0;
}
