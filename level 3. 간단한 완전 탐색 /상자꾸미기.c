#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int arr[1010] = {0};
  int cnt[1010] = {0};

  scanf(" %d", &n);

  for(int i=1; i<=n; i++){
    scanf(" %d", &arr[i]);

    cnt[arr[i]]++;
    if(cnt[arr[i]] > 2)
      cnt[arr[i]] = 2;

  }

  int sum = 0;
  for(int i=1; i<=n; i++){
    sum += cnt[i];
  }

  if(sum >=6)
    printf("YES\n");
  else
    printf("NO");

  return 0;
}
