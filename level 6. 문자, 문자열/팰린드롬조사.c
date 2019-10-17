#include <stdio.h>
#include <string.h>

char a[1010];
int len;

int main() {

  scanf("%s", a);
  len = strlen(a);

  bool flag = true;
  for(int i=0; i<len/2; i++){
    if(a[i] != a[(len-1)-i])
      flag = false;
  }

  if(flag == true)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
