#include <stdio.h>

int main(){

  int x, y;
  int s, num;
  int dist;

  scanf("%d %d", &x, &y);
  dist = y-x;

  s=1; num=0;
  while(dist >0){
    dist -=s;
    num++;

    if(num%2==0)
      s++;
  }

  printf("%d", num);

  return 0;
}
