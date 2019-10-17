#include <cstdio>
using namespace std;

const int Max = 100010;

int n;
int data[Max];


int getSubMax(int start, int end){
  if(start >= end)
    return data[start];

  else{
    int mid = (start+end)/2;

    int left = getSubMax(start, mid);
    int right = getSubMax(mid+1, end);

    int leftsum = 0, leftmax = -99999999;
    for(int i=mid; i>=start; i--){
      leftsum += data[i];

      if(leftsum > leftmax)
        leftmax = leftsum;
    }

    int rightsum = 0, rightmax = -9999999;
    for(int i=mid+1; i<=end; i++){
      rightsum += data[i];

      if(rightsum > rightmax)
        rightmax = rightsum;
    }

    int midmax = leftmax + rightmax;

    if(midmax >= left && midmax >= right) return midmax;
    else if(left >= midmax && left >= right) return left;
    else  return right;

  }
}


int main(){
  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &data[i]);
  }

  printf("%d\n", getSubMax(0, n-1));

  return 0;
}
