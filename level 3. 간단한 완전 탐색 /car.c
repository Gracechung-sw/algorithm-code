#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int day;
  scanf("%d", &day);

  int car[10] = {0};

  int cnt = 0;
  for(int i=1; i<=5; i++){
    scanf("%d", &car[i]);
    if(car[i] == day)
      cnt++;
  }

  printf("%d\n", cnt);


  return 0;
}
