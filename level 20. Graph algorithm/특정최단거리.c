#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int Max = 1010;
int node, edge;
int T[Max];
bool check[Max];

vector<int> myGraph[Max];
vector<int> Cost[Max];

int Di(int s, int e){
  //check초기화
  for(int i=1; i<=node; i++){
    check[i] = 0;
  }
  //T[i] 초기화
  for(int i=1; i<=node; i++){
    T[i] = 9999999;
  }T[s] = 0;

  for(int i=1; i<=node; i++){
    int minvalue = 9999999, mininx = -1;

    for(int j=1; j<=node; j++){
      if(check[j] == 0){
        if(minvalue > T[j]){
          minvalue = T[j];
          mininx = j;
        }
      }
    }

    check[mininx] = 1;

    for(int j=0; j<myGraph[mininx].size(); j++){
      int node2 = myGraph[mininx][j];
      int cost2 = Cost[mininx][j];

      if(T[node2] > T[mininx]+cost2){
        T[node2] = T[mininx]+cost2;
      }
    }
  }

  return T[e];
}

int main(){
  scanf("%d %d", &node, &edge);

  for(int i=1; i<=edge; i++){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    myGraph[a].push_back(b);
    myGraph[b].push_back(a);

    Cost[a].push_back(c);
    Cost[b].push_back(c);
  }

  int n1, n2;
  scanf("%d %d", &n1, &n2);

  //이제 다익스트라 시작
  int dist1 = Di(1, n1);// printf("dist1:%d\n", dist1);

  int dist11 = Di(n2, node);//printf("dist11:%d\n", dist11);
  int dist2 = Di(1, n2); //printf("dist2:%d\n", dist2);
  int dist22 = Di(n1, node);//printf("dist22:%d\n", dist22);
  int dist = Di(n1, n2);//printf("dist:%d\n", dist);


  int totaldist1 = dist1+dist+dist11;
  int totaldist2 = dist2+dist+dist22;

  if(totaldist1 > totaldist2)
    printf("%d\n", totaldist2);
  else
    printf("%d\n", totaldist1);

  return 0;
}
