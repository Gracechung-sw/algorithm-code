#include <stdio.h>
#include <string.h>

const int Max = 1010;
char a[Max], b[Max];
int lena, lenb;
int T[Max][Max];

int min(int a, int b){
  return (a<b)? a:b;
}

int main() {

  //Please Enter Your Code Here
  scanf("%s", a);
  scanf("%s", b);

  lena = strlen(a);
  lenb = strlen(b);

  for(int i=0; i<=lena; i++){
    for(int j=0; j<=lenb; j++){
      if(i==0) T[i][j] = j;
      else if(j==0) T[i][j] = i;
      else{
        if(a[i-1] == b[j-1])
          T[i][j] = T[i-1][j-1];
        else
          T[i][j] = 1+min(T[i][j-1], T[i-1][j]);
      }
    }
  }

  printf("%d\n", T[lena][lenb]);

  return 0;
}
