//방향성 그래프이며
//출력은 그룹의 개수
#include <cstdio>
#include <vector>
//#include <algorithm>
using namespace std;

const int Max = 1010;
vector <int> list[Max];
vector <int> reverselist[Max];
int n, m;
int time[Max], clock = 1;
int order[Max], order_len = 0;
int group[Max], group_cnt = 1;
bool check[Max];
bool check2[Max];


void getTimeDFS(int node){
  //node부터 시작해서 DFS를 하면서, 빠져나오는 순서대로 시간을 기록

  check[node] = true;
  for(int i=0; i<list[node].size(); i++){
    int node2 = list[node][i];

    if(!check[node2]){
      getTimeDFS(node2);
    }
  }
  //다하고 빠져나왔을 때.
  time[node] = clock;
  clock++;

  order[order_len++] = node;//빠져나온 시간이 작은 순서대로 노드번호가 기억딤.
}

void get_my_group(int node){
  //거꾸로 된 그래프에 대해서
  check2[node] = true;
  group[node] = group_cnt;//만나는 node마다 똑같은 그룹번호를 부여한다.

  for(int i=0; i<reverselist[node].size(); i++){
    int node2 = reverselist[node][i];

    if(check2[node2] == false){
      get_my_group(node2);
    }
  }
}

int main(){
  scanf("%d %d", &n, &m);

  for(int i=0; i<m; i++){
    int a, b;
    scanf("%d %d", &a, &b);//a->b 라는 의미다.

    list[a].push_back(b);
    reverselist[b].push_back(a);
  }

  //DFS하면서 빠져나오는 순서대로 시간을 기록한다.
  for(int i=1; i<=n; i++){
    if(check[i] == 0){//아직 방문하지 않았다면
      getTimeDFS(i);

    }
  }

  //빠져나오는 순서대로 시간이 기록된다.
  //뒤집은 그래프에 대해서 빠져나오는 시간이 큰 노드부터 순회하낟.
  //이때 만나는 노드들이 모두 같은 그룹이다.

  for(int i=order_len-1; i>=0; i--){
    int node = order[i];//빠져나오는 순서가 큰 순서대로 node에 들어감.

    //이제 순회(DFS)한다.
    if(check2[node]==0){
      get_my_group(node);
      group_cnt++;
    }
  }

  // for(int i=1; i<=n; i++){
  //   printf("%d : %d\n", i, group[i]);
  // }

  printf("%d", group_cnt-1);//그러면 총 그룹의 개수룰 구할 수 있다.

  return 0;


}
