#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int a[20], b[20];
  int cnta=0, cntb=0;

  for(int i=1; i<=10; i++)
    scanf("%d ", &a[i]);

  for(int i=1; i<=10; i++)
    scanf("%d ", &b[i]);

  for(int i=1; i<=10; i++){
    if(a[i]>b[i])
      cnta++;
    else if(a[i]<b[i])
      cntb++;
  }

  if(cnta>cntb)
    printf("A\n");
  else if(cnta<cntb)
    printf("B\n");
  else
    printf("D\n");


  return 0;
}
