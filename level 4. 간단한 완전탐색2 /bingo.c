#include <stdio.h>

int map[10][10];
int arr[30];
int bingo;

int checkG(){

  for(int i=1; i<=5; i++){
    int sum = 0;
    for(int j=1; j<=5; j++){
      sum += map[i][j];
    }
    if(sum == 0){
      bingo++;
    }
  }

}

int checkS(){

  for(int j=1; j<=5; j++){
    int sum = 0;
    for(int i=1; i<=5; i++){
      sum += map[i][j];
    }
    if(sum == 0){
      bingo++;
    }
  }

}

int checkD1(){
  int sum = 0;
  for(int i=1; i<=5; i++){
    sum += map[i][5-(i-1)];
  }
  if(sum == 0){
    bingo++;
  }
}

int checkD2(){
  int sum = 0;
  for(int i=1; i<=5; i++){
    sum += map[i][i];
  }
  if(sum == 0){
    bingo++;
  }
}

int main(){

  for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
      scanf("%d", &map[i][j]);
    }
  }
  for(int i=1; i<=25; i++){
    scanf("%d", &arr[i]);
  }

  for(int k=1; k<=25; k++){
    for(int i=1; i<=5; i++){
      for(int j=1; j<=5; j++){
        if(arr[k] == map[i][j]){
          map[i][j] = 0; bingo = 0;

          checkG();
          checkS();
          checkD1();
          checkD2();

          if(bingo >= 3){
            printf("%d\n", k);
            return 0;
          }
        }
      }
    }
  }

  return 0;
}
