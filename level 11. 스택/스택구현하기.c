#include <stdio.h>

struct Stack{
  int data[110];
  int capacity;
  int len = 0;

  void create(int x){
   capacity = x;
  }

  void push(int x){
    if(len >= capacity)
      printf("Overflow\n");
    else{
      data[len++] = x;
    }
  }

  void pop(){
    if(len <= 0)
      printf("Underflow\n");
    else{
      data[len-1] = 0;
      len--;
    }
  }

  void top(){
    if(len<=0)
      printf("NULL\n");
    else
      printf("%d\n", data[len-1]);
  }
};

int main() {

  //Please Enter Your Code Here
  Stack s;
  int n, m;
  int opt;

  scanf("%d %d", &n, &m);
  s.create(n);

  for(int i=1; i<=m; i++){
    scanf("%d", &opt);
    if(opt == 1){
      int num;
      scanf("%d", &num);
      s.push(num);
    }
    else if(opt == 2){
      s.pop();
    }
    else{
      s.top();
    }

  }

  return 0;
}
