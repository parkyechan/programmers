#include<cstdio>
#include<algorithm>
#include<queue>
#include<functional>
#include<vector>
using namespace std;
int main(){
  int n, K;
  scanf("%d %d", &n, &K);
  vector<int> scoville(n);
  for(int i=0; i<n; i++){
    scanf("%d", &scoville[i]);
  }





  priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
  int cnt = 0;
  while(pq.top() < K){
    if(pq.size() == 1) return -1;
    cnt++;
    int sv;
    int s1 = pq.top();
    pq.pop();
    int s2 = pq.top();
    pq.pop();
    sv = s1 + (s2 * 2);
    pq.push(sv);
  }
  printf("%d", cnt);
}
