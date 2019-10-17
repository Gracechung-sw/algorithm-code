#include <stdio.h>

const int Max = 100010;
int n, q;
long long int data[Max];

bool BS(long long int data[], int s, int e, long long int value){
  if(data[s] > value) return false;
  else if(data[s] == value) return true;

  if(data[e] < value) return false;
  else if(data[e] == value) return true;

  else{
    int start = s, end = e;
    while(start+1 < end){
      int mid = (start+end)/2;

      if(data[mid] == value) return true;
      else if(data[mid] < value){
        start = mid;
      }
      else{
        end = mid;
      }
    }
    return false;
  }

}


int main() {

  //Please Enter Your Code Here
  scanf("%d %d", &n, &q);

  for(int i=0; i<n; i++){
    scanf("%lld", &data[i]);
  }

  for(int i=0; i<q; i++){
    long long int question;
    scanf("%lld ", &question);

    bool result = BS(data, 0, n-1, question);
    if(result == false) printf("NO\n");
    else printf("YES\n");
  }

  return 0;
}
