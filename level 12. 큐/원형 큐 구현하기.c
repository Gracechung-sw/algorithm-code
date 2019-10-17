#include <stdio.h>

const int Max = 110;
int n, m;

struct Queue{
  int data[Max];
  int numelement;
  int capacity;
  int f, r;

  void create(int y){
    capacity = y;
    f=0, r=0;
    numelement=0;
  }


  void push(int y){

    if(numelement >= capacity)
      printf("Overflow\n");
    else{
      data[r] = y;
      r = (r+1)%Max;
      numelement++;
    }
  }

  void pop(){
    if(numelement <= 0)
      printf("Underflow\n");
    else{
      data[f] = 0;
      f = (f+1)%Max;
      numelement--;
    }
  }

  void front(){
    if(numelement <= 0)
      printf("NULL\n");
    else{
      printf("%d\n", data[f]);
    }
  }



};

int main() {

  //Please Enter Your Code Here
  scanf("%d %d", &n, &m);

  Queue q;

  q.create(n);

  // printf("%d", n);

  for(int i=1; i<=m; i++){
  int opt;
  scanf("%d", &opt);

  if(opt==1){
    int num;
    scanf("%d", &num);
    q.push(num);
  }
  else if(opt==2){
    q.pop();
  }
  else{
    q.front();
  }

  }


  return 0;
}
