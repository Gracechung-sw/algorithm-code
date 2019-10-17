#include <stdio.h>
#include <stack>
using namespace std;

const int Max = 500010;

int n;
long long int arr[Max];
int top[Max];
stack<int> s;

int main(){
  scanf("%d", &n);

  arr[0] = 100000010;
  s.push(0);

  for(int i=1; i<=n; i++)
    scanf("%d", &arr[i]);

  for(int i=1; i<=n; i++){
    if(!s.empty()&& arr[i] < arr[s.top()])
      s.push(i);
    else{
      while(!s.empty()  && arr[i] >= arr[s.top()]){
        int temp = s.top();
        s.pop();
        top[temp] = s.top();
      }
      s.push(i);
    }
  }

  if(!s.empty()){
    while(s.size()>1){
      int temp = s.top();
      s.pop();
      top[temp] = s.top();
    }
  }

  for(int i=1; i<=n; i++)
    printf("%d ", top[i]);

  return 0;

}
