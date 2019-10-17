#include <stdio.h>

struct Queue{
  int data[110];
  int front, rear;
  int capacity;

  void create(int x){
    capacity = x;
    front = 0, rear = 0;
  }

  void push(int x){
    if(rear-front >= capacity || rear>=capacity)
      printf("Overflow\n");
    else{
      data[rear] = x;
      rear++;
    }
  }

  void pop(){
    if(rear-front <=0)
      printf("Underflow\n");
    else{
      data[front] = 0;
      front++;
    }
  }

  void Front(){
    if(rear-front <= 0)
      printf("NULL\n");
    else{
      printf("%d\n", data[front]);
    }
  }

};

Queue Q;

int main() {

  //Please Enter Your Code Here
  int n, m;
  scanf("%d %d", &n, &m);

  Q.create(n);

  for(int i=1; i<=m; i++){
    int opt;
    scanf("%d", &opt);

    if(opt == 1){
      int num;
      scanf("%d", &num);
      Q.push(num);
    }
    else if(opt == 2){
      Q.pop();
    }
    else{
      Q.Front();
    }
  }

  return 0;
}
