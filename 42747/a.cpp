#include<cstdio>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  scanf("%d", &n);
  vector<int> citations;
  for(int i=0; i<n; i++){
    int tt;
    scanf("%d", &tt);
    citations.push_back(tt);
  }


  int answer = 0;
  sort(citations.begin(), citations.end(), greater<int>());
  for(int i=0; i<citations.size(); i++){
    printf("%d ", citations[i]);
  }
  while(answer < citations.size()){
    if(answer >= citations[answer]) break;
    answer++;
  }
  printf("%d", answer);
}
