#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> answer;
int solution(vector<int> progresses, vector<int> speeds) {
  vector<int> v;
  for(int i=0; i<progresses.size(); i++){
      int day = 0;
      while(progresses[i] < 100){
          progresses[i] += speeds[i];
          day++;
      }
      v.push_back(day);
  }
  int tmp = v[0];
  int cnt = 0;
  for(int i=0; i<v.size(); i++){
    if(v[i] > tmp){
      answer.push_back(cnt);
      cnt = 1;
      tmp = v[i];
    }else{
      cnt++;
    }
    if(i == v.size() -1){
      answer.push_back(cnt);
    }
  }
}

int main(){
  vector<int> a;
  vector<int> b;
  a.push_back(93);
  a.push_back(30);
  a.push_back(55);
  b.push_back(1);
  b.push_back(30);
  b.push_back(5);
  solution(a, b);
  for(int i=0; i<answer.size(); i++) printf("%d ", answer[i]);
}
