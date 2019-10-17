#include <stdio.h>

int n, r;
int check[20];
char arr[20];

void getResult(int inx){
  if(inx >= r)
    printf("%s\n", arr);

  else{
    for(int i=0; i<n; i++){
      if(check[i] == 0){
        arr[inx] = i+'a';
        check[i] = 1;
        getResult(inx+1);
        check[i] = 0;
      }
    }
  }

}

int main() {

  //Please Enter Your Code Here
  scanf("%d %d", &n, &r);
  getResult(0);

  return 0;
}
