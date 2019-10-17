#include <stdio.h>
#include <string.h>

int main(){

  char a[110], b[110];
  int sum[110] = {0};

  scanf("%s", a);
  scanf("%s", b);

  int i =strlen(a)-1;
  int j = strlen(b)-1;


  int len =0;

  while(i>=0 && j>=0){
    sum[len] += (a[i]-'0') + (b[j]-'0');

    if(sum[len]>=10){
      sum[len+1] += sum[len]/10;
      sum[len] = sum[len]%10;
    }


    len++, i--, j--;
  }

  if(i<0){
    while(j>=0){
      sum[len] += b[j]-'0';

      if(sum[len] >=10){
        sum[len+1] += sum[len]/10;
        sum[len] = sum[len]%10;
      }
      len++;j--;
    }
  }

  if(j<0){
    while(i>=0){
      sum[len] += a[i]-'0';

      if(sum[len] >=10){
        sum[len+1] += sum[len]/10;
        sum[len] = sum[len]%10;
      }
      len++;i--;
    }
  }

  for(int k=len; k>=0; k--){
    if(k==len && sum[len]==0){
      continue;

    }
    printf("%d", sum[k]);
  }

  return 0;


}
