#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


const int Max = 10010;
int node, edge, s, e;
int T[Max];
bool check[Max];

vector <int> myGraph[Max];
vector <int> Cost[Max];

int main(){
  scanf("%d %d", &node, &edge);

  for(int i=1; i<=edge; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    myGraph[a].push_back(b);
    myGraph[b].push_back(a);

    Cost[a].push_back(1);
    Cost[b].push_back(1);
  }

  scanf("%d %d", &s, &e);

  for(int i =0; i<node; i++){
    T[i] = 999999;
  }T[s] = 0;

  for(int i=0; i<node; i++){
    //1. 확정되지 않은 것 중 최소값 구하기, 확정
    int minvalue = 99999999, mininx = -1;
    for(int i=0; i<node; i++){
      if(check[i] == 0){
        if(minvalue > T[i]){
          minvalue = T[i];
          mininx = i;
        }
      }
    }
    check[mininx] = 1;
     //2. 인접한 노드로 확장
    for(int j=0; j<=myGraph[mininx].size(); j++){
      int node2 = myGraph[mininx][j];
      int cost2 =Cost[mininx][j];

      if(T[node2] > T[mininx]+cost2){
        T[node2] =  T[mininx]+cost2;
      }
    }
  }

  //이걸 n번 반복하면 모든 노드에 start부터의 최단거리가 들어가있다.

  // for(int i =0; i<node; i++){
  //   printf("%d ", T[i]);
  // }

  printf("%d\n", T[e]);

  return 0;
}
