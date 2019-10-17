#include <stdio.h>

const int Max = 1000010;
int n;
bool T[Max];

int main(){
  scanf("%d", &n);

  T[0] = 0, T[1]=1, T[2]=1, T[3]=1; //1:이김, 0:짐

  for(int i=4; i<=n; i++){
    if(T[i-1] && T[i-2] && T[i-3]) //영희가 다 이기면
      T[i] = 0;//철수는 진다.
    else//하나라도 영희가 지는게 있으면
      T[i] = 1;//철수는 이긴다.
  }

  if(T[n] == 1)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}
