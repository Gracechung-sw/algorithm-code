#include <stdio.h>

int n;
int arr[100010];

bool check(int term){
  int cnt[100010] = {0};
  int num = 0;

  for(int i=0; i<term; i++){
    cnt[arr[i]]++;
  }

  for(int i=0; i<100010; i++){
    if(cnt[i]>=2)
      num++;
  }

  if(num==0)
    return true;

  int s = 0, e = term-1;

  while(s < n-term){
    if(cnt[arr[s]]--){
      if(cnt[arr[s]]==1)
        num--;
    }
    s++;

    if(cnt[arr[e+1]]++){
      if(cnt[arr[e+1]]==2)
        num++;
    }
    e++;

    //printf("num:%d\n", num);

    if(num == 0)
      return true;
  }
  return false;

}

int main() {

  //Please Enter Your Code Here

  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
  }

  int start = 1, end = n;

  if(check(end)==true){
    printf("%d", end);
    return 0;
  }

  while(start+1 < end){
    int mid = (start+end)/2;

    if(check(mid) == true){
      start = mid;
    }
    else
      end = mid;
  }
  printf("%d", start);

  return 0;
}
