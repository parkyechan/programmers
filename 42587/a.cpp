#include<vector>
#include<cstdio>
#include<deque>
using namespace std;
int main(){
  int dd;
  scanf("%d", &dd);
  for(int i=0; i<dd; i++){
    int n, l;
    int answer = 0;
    scanf("%d %d", &n, &l);
    vector<int> priorities(n);
    for(int i=0; i<n; i++){
      scanf("%d", &priorities[i]);
    }
    deque<int> pn, dq;
    for(int i=0; i<priorities.size(); i++){
      dq.push_back(priorities[i]);
      pn.push_back(i);
    }
    deque<int>::iterator iter;
    bool flag = true;
    while(flag){
      int cnt = 0;
      for(iter = dq.begin(); iter != dq.end(); iter++){
        flag = false;
        if(*iter > dq.front()){
          for(int i=0; i<cnt; i++){
            int tmp = dq.front();
            dq.pop_front();
            dq.push_back(tmp);
          }
          for(int i=0; i<cnt; i++){
            int tmp = pn.front();
            pn.pop_front();
            pn.push_back(tmp);
          }
          flag = true;
          // printf()
          break;
        }
        cnt++;
      }
      if(flag == false){
        if(pn.front() != l){
          flag = true;
          answer++;
          pn.pop_front();
          dq.pop_front();
        }
      }
    }
    for(iter = pn.begin(); iter != pn.end(); iter++){
      if(*iter == l) break;
      answer++;
    }
    printf("%d\n", answer + 1);
  }
}
