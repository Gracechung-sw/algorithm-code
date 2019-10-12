#include <stdio.h>

int main(){

  int n;
  int noon[10];
  int cnt[10];
  int maxcnt;
  int inx;
  int money;
  int maxmoney;

  scanf("%d", &n);

  for(int i=1; i<=n; i++){

    for(int j=1; j<=10; j++){
      cnt[j] = 0;
      noon[j] = 0;
    }

    for(int j=1; j<=3; j++){
      scanf("%d", &noon[j]);
      cnt[noon[j]]++;
    }

    maxcnt = 0;
    inx = 0;
    for(int j=1; j<=6; j++){
      if(maxcnt <= cnt[j]){
        maxcnt = cnt[j];
        inx  = j;
      }
    }

    money = 0;
    if(maxcnt == 3)
      money = 10000+inx*1000;
    else if(maxcnt==2)
      money = 1000 + inx *100;
    else
      money = 100*inx;

    if(maxmoney <= money)
      maxmoney = money;

  }

  printf("%d\n", maxmoney);

  return 0;
}
