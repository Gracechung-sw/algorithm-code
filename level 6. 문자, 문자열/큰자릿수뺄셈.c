#include <stdio.h>
#include <string.h>

char a[110];
char b[110];
int min[110];

void Minus(char big[], char small[]){
  int i = strlen(big)-1;
  int j = strlen(small)-1;

  int len = 0;
  while(i>=0 && j>=0){
    min[len] += (big[i]-'0') - (small[j]-'0');

    if(min[len]<0){
      min[len+1] += -1;
      min[len] += 10;
    }

    len++, i--, j--;
  }

  if(j<0){
    while(i>=0){
      min[len] += (big[i]-'0');

      if(min[len]<0){
        min[len+1] += -1;
        min[len] += 10;

      }
      len++, i--;
    }
  }

  bool flag = false;
  for(int k=len; k>=0; k--){
    if(flag==false && min[k]==0)
      continue;
    else if(flag==true && min[k]==0)
      printf("%d", min[k]);
    else{
      printf("%d", min[k]);
      flag = true;
    }
  }

  return;

}

int main() {

  //Please Enter Your Code Here
  scanf("%s", a);
  scanf("%s", b);

  int lena = strlen(a);
  int lenb = strlen(b);

  if(strcmp(a, b)==0){
    printf("0\n");
    return 0;
  }
  if(lena>lenb){
  //
    //printf("1:\n");
    Minus(a, b);
  }

  else if(lena==lenb){
    for(int i=0; i<lena; i++){
      if((a[i]-'0') > (b[i]-'0')){
        //printf("2:\n");
        Minus(a, b);
        break;
      }
      else if((a[i]-'0') < (b[i]-'0')){
        //printf("3:\n");
        printf("-");Minus(b, a);
        break;
      }
    }
  }

  else{
    //printf("4:\n");
    printf("-");Minus(b, a);
  }


  return 0;
}
