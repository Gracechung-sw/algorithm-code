#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int Max = 1010;

int node, edge;
int time1[Max], clock1=1;
int order[Max], order_inx = 0;
int group[Max], group_cnt = 1;
bool check[Max], check2[Max];

vector <int> myGraph[Max];
vector <int> reverseGraph[Max];

void getTimeDFS(int x){
  check[x] = 1;

  for(int i=0; i<myGraph[x].size(); i++){
    int node2 = myGraph[x][i];

    if(check[node2] == 0){
      getTimeDFS(node2);
    }
  }

  time1[x] = clock1;
  clock1++;
  order[order_inx++] = x;
}

void get_my_group(int node){
  //거꾸로 된 그래프에 대해서
  check2[node] = true;
  group[node] = group_cnt;//만나는 node마다 똑같은 그룹번호를 부여한다.

  for(int i=0; i<myGraph[node].size(); i++){
    int node2 = myGraph[node][i];

    if(check2[node2] == false){
      get_my_group(node2);
    }
  }
}


int main(){
  scanf("%d %d", &node, &edge);

  for(int i=1; i<=edge; i++){
    int a, b;
    scanf("%d %d", &a, &b);

    myGraph[a].push_back(b);
    reverseGraph[b].push_back(a);
  }


  for(int i=1; i<=node; i++){

    if(check[i] == 0){
      getTimeDFS(i);
    }
  }

  for(int i=order_inx-1; i>=0; i--){
    int node = order[i];

    if(check2[node] == 0){
      get_my_group(node);
      group_cnt++;
    }
  }


  // for(int i=1; i<=node; i++){
  //   printf("%d: %d\n", i, group[i]);
  // }printf("\n");

  printf("%d\n", group_cnt-1);

  return 0;
}
