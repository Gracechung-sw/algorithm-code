#include <stdio.h>

int main(){
  int n;
  int num[110], strike[110], ball[110];
  int s, b;
  bool flag;
  int hun, ten, one;
  int n1, n2, n3;

  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    scanf("%d %d %d", &num[i], &strike[i], &ball[i]);
  }

  int count = 0;
  for(int i=123; i<=987; i++){
    hun = i/100;
    ten = (i/10)%10;
    one = i%10;

    if(hun==ten || ten==one|| hun==one|| ten==0|| one==0)
      continue;

    else{
      flag = true;

      for(int j=1; j<=n; j++){
        s=0, b=0;

        n1 = num[j]/100;
        n2 = (num[j]/10)%10;
        n3 = num[j]%10;

        if(hun==n1) s++;
        else if(hun==n2||hun==n3) b++;

        if(ten==n2) s++;
        else if(ten==n1|| ten==n3) b++;

        if(one==n3) s++;
        else if(one==n1|| one==n2) b++;

        if(s!= strike[j] || b!= ball[j]){
          flag = false;
          break;
        }
      }
    }

    if(flag == true)
      count++;
  }

  printf("%d", count);

  return 0;
}
