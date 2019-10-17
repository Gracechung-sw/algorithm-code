#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int arr[110];

  scanf("%d", &n);
  for(int i=1; i<=n; i++)
    scanf("%d", &arr[i]);

  int cnt=0;
  for(int i=1; i<=n; i++){
    if(arr[i] == 1)
      continue;
    else if(arr[i]==2)
      cnt++;
    else{
      bool flag = true;
      for(int j=2; j<arr[i]; j++){
        if(arr[i]%j == 0)
          flag = false;
      }
      if(flag == true)
        cnt++;
    }
  }

  printf("%d\n", cnt);

  return 0;
}
