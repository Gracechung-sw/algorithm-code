#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

char opt[60];
int len;
stack <char> s;

void getResult(){

  for(int i=0; i<len; i++){
    if(opt[i] == '('){
      s.push(opt[i]);
    }
    else{
      if(!s.empty() && s.top() == '('){
        s.pop();
      }
      else{
        printf("NO\n");
        return;
      }
    }
  }

  if(!s.empty())
    printf("NO\n");
  else
    printf("YES\n");

  return;
}


int main() {

  //Please Enter Your Code Here
  scanf("%s", opt);
  len = strlen(opt);

  getResult();

  return 0;
}
