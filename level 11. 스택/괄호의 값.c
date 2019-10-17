#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

char opt[60];
int len;
stack <int> s;

void getResult(){
  for(int i=0; i<len; i++){
    if(opt[i] == '(') s.push(-1);
    else if(opt[i] == '[') s.push(-2);
    else if(opt[i] == ')'){
      if(!s.empty() && s.top() == -1){
        s.pop();
        s.push(2);
      }
      else{
        int sum = 0;
        while(1){
          if(s.empty() || (!s.empty()&&s.top()==-2)){
            printf("0\n"); return;
          }
          else if(!s.empty() && s.top() == -1){
            s.pop(); s.push(2*sum); break;
          }
          else{
            sum += s.top();
            s.pop();
          }
        }
      }
    }
    else if(opt[i] == ']'){
      if(!s.empty() && s.top() == -2){
        s.pop(); s.push(3);
      }
      else{
        int sum = 0;
        while(1){
          if(s.empty() || (!s.empty() && s.top() == -1)){
            printf("0\n"); return;
          }
          else if(!s.empty() && s.top() == -2){
            s.pop(); s.push(3*sum); break;
          }
          else{
            sum += s.top();
            s.pop();
          }
        }
      }
    }
  }

  int total=0;
  while(!s.empty()){
    if(s.top() == -1 || s.top() == -2){
      printf("0\n"); return;
    }
    else{
      total += s.top();
      s.pop();
    }
  }
  printf("%d\n", total);
  return;
}


int main(){
  scanf("%s", opt);
  len = strlen(opt);

  getResult();

  return 0;
}
