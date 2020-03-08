#include<cstdio>
#include<vector>
#include<queue>
#include<deque>
using namespace std;
int main(){
  int bridge_length, weight;
  int n;
  scanf("%d %d %d", &n, &bridge_length, &weight);
  vector<int> truck_weights(n);
  for(int i=0; i<n; i++){
    scanf("%d", &truck_weights[i]);
  }




  queue<int> q;
  for(int i=0; i<truck_weights.size(); i++){
    q.push(truck_weights[i]);
  }
  deque<int> dq(bridge_length, 0);
  int cnt = 0;
  int sum;
  deque<int>::iterator iter;
  while(!q.empty()){
    sum = 0;
    for(iter = dq.begin()+1; iter != dq.end(); ++iter){
      sum += *iter;
    }
    if(sum + q.front() <= weight){
      dq.pop_front();
      dq.push_back(q.front());
      q.pop();
      cnt++;
    }else{
      while(sum + q.front() > weight){
        dq.pop_front();
        dq.push_back(0);
        sum = 0;
        for(iter = dq.begin()+1; iter != dq.end(); ++iter){
          sum += *iter;
        }
        cnt++;
      }
    }
  }
  sum = 0;
  for(iter = dq.begin(); iter != dq.end(); iter++){
    sum += *iter;
  }
  while(sum != 0){
    dq.pop_front();
    cnt++;
    sum = 0;
    for(iter = dq.begin(); iter != dq.end(); iter++){
      sum += *iter;
    }
  }
  printf("%d", cnt);
}
