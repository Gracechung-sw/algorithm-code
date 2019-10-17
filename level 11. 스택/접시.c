#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

stack <int> s;
int str[40];
char temp[40];
int opt[200];
int optlen = 0;
int len;
bool flag = true;

void getResult(){
  int start = -1;

  for(int i=0; i<len; i++){
    if(str[i] >= start){
      for(int j=start+1; j<=str[i]; j++){
        s.push(j); opt[optlen++] = 1;//printf("push\n");
      }
      start = str[i];
      s.pop(); opt[optlen++] = 2;//printf("pop\n");
    }

    else if(str[i] < start){
      if(!s.empty() && s.top() == str[i]){
        s.pop(); opt[optlen++] = 2;//printf("pop\n");
      }
      else{
        flag = false;//printf("impossible\n");
        return;
      }
    }

  }

  return;
}

int main() {

  //Please Enter Your Code Here
  scanf("%s", temp);
  len = strlen(temp);

  for(int i=0; i<len; i++){
    str[i] = temp[i]-'a';
  }

  getResult();
  if(flag == true){
    for(int i=0; i<optlen; i++){
      if(opt[i] == 1)
        printf("push\n");
      else
        printf("pop\n");
    }
  }
  else
    printf("impossible\n");

  return 0;
}
