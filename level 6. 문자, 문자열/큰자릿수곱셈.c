#include <stdio.h>
#include <string.h>

char a[110], b[110];
int c[110110];

int main() {

  scanf("%s", a); scanf("%s", b);
  int lena = strlen(a), lenb = strlen(b), inx = 0;

  int start = 0;

  for(int i=lenb-1; i>=0; i--){
    inx = start;
    for(int j=lena-1; j>=0; j--){
      c[inx] += (b[i]-'0')*(a[j]-'0');

      if(c[inx]>=10){
        c[inx+1]+=c[inx]/10;
        c[inx] = c[inx]%10;
      }

      inx++;
    }
    start++;
  }

  for(int k=inx; k>=0; k--){
    if(k==inx && c[k]==0)
      continue;
    printf("%d", c[k]);
  }

  return 0;
}
