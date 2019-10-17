#include <stdio.h>
int arr[110];
bool done = false;

int n;

void getResult(int len){
  bool flag;
  if(done == true)
    return ;

  for(int i=1; i<=3; i++){
    arr[len] = i;

    for(int range = 1; range<=(len+1)/2; range++){
      flag = false;
      for(int kan = 0; kan<range; kan++){
        if(arr[len-kan] != arr[len-kan-range]){
          flag = true; break;
        }
      }
      if(flag==false)
        break;
    }

    if(flag==true){
      if(len == n-1){
        done = true;
        for(int k=0; k<n; k++){
          printf("%d", arr[k]);
        }
        return;
      }
      getResult(len+1);
    }
  }
}

int main() {

  //Please Enter Your Code Here
  scanf("%d", &n);

  getResult(0);


  return 0;
}
