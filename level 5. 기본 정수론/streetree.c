#include <stdio.h>
int n;
long int tree[100010];
long int dist[100010];
long int GCD;

int getGCD(int a, int b){
  int r;

  while(1){
    r = a%b;
    if(r==0)
      return b;
    a=b;
    b=r;
  }
}

int main() {

  scanf("%d", &n);

  for(int i=1; i<=n; i++){
    scanf("%d", &tree[i]);
  }
  long int mindist = 99999999999;
  for(int i=1; i<n; i++){
    dist[i] = tree[i+1]-tree[i];
    if(mindist > dist[i])
      mindist = dist[i];
  }

  GCD = dist[1];
  for(int i=2; i<n; i++){
    GCD = getGCD(GCD, dist[i]);
  }

  // for(int i=mindist; i>=1; i--){
  //   bool flag = true;
  //   for(int j=1; j<n; j++){
  //     if(dist[j]%i != 0)
  //       flag = false;
  //   }
  //   if(flag == true){
  //     GCD = i;
  //     break;
  //   }
  // }

  int moretree = (tree[n]-tree[1])/GCD+1 -n;
  printf("%d\n", moretree);


  return 0;
}
