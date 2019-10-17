#include <stdio.h>
int n;

void Binary(int x){
  if(x==1||x==0)
    printf("%d", x);

  else{
    Binary(x/2);
    printf("%d", x%2);
  }
}

int main(){
  scanf("%d", &n);

  Binary(n);

  return 0;
}
