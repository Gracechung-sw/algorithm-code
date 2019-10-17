#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

const int Max = 1010;
int node, edge, home;
vector <int> mygraph[Max];
vector <int> reversegraph[Max];
vector <int> cost[Max];
vector <int> reversecost[Max];

bool check[Max];
int T[Max];
int total;


void init(){
  for(int i=0; i<Max; i++){
    check[i] = 0;
    T[i] = 999999;
  }
  total= 0;

}

int ReverseDi(int s){
  init();
  T[s] = 0;

  for(int i=1; i<=node; i++){
    int minvalue = 999999, mininx = -1;

    for(int j=1; j<=node; j++){
      if(check[j]==0){
        if(minvalue>T[j]){
          minvalue = T[j];
          mininx = j;
        }
      }
    }
    check[mininx] = 1;
    total += T[mininx];

    for(int j=0; j<reversegraph[mininx].size(); j++){
      int node2 = reversegraph[mininx][j];
      int weight = reversecost[mininx][j];

      if(T[node2] > T[mininx]+weight)
        T[node2] = T[mininx]+weight;
    }

  }

  return total;
}

int Di(int s){
  init();
  T[s] = 0;

  for(int i=1; i<=node; i++){
    int minvalue = 999999, mininx = -1;

    for(int j=1; j<=node; j++){
      if(check[j]==0){
        if(minvalue>T[j]){
          minvalue = T[j];
          mininx = j;
        }
      }
    }
    check[mininx] = 1;
    total += T[mininx];

    for(int j=0; j<mygraph[mininx].size(); j++){
      int node2 = mygraph[mininx][j];
      int weight = cost[mininx][j];

      if(T[node2] > T[mininx]+weight)
        T[node2] = T[mininx]+weight;
    }

  }

  return total;
}

int main(){
  scanf("%d %d %d", &node, &edge, &home);

  for(int i=1; i<=edge; i++){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    mygraph[a].push_back(b);
    reversegraph[b].push_back(a);
    cost[a].push_back(c);
    reversecost[b].push_back(c);
  }

  int sum = 0;
  //철수 집 올 때는
  sum += ReverseDi(home);
  //철수 집에서 갈 때는
  sum += Di(home);


  printf("%d\n", sum);

  return 0;

}
