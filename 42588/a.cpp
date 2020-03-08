#include<cstdio>
#include<stack>
#include<vector>
using namespace std;
int main(){
  vector<int> answer;
  int n;
  scanf("%d", &n);
  vector<int> heights(n);
  vector<int> v;
  for(int i=0; i<n; i++){
    scanf("%d", &heights[i]);
  }
  for(int i=heights.size(); i>=0; i--){
    int f = 0;
    for(int j=i-1; j>=0; j--){
      if(heights[i-1] < heights[j-1]){
        v.push_back(j);
        f = 1;
        break;
      }
    }
    if(f == 0) v.push_back(0);
  }
  int vs = v.size();
  for(int i=vs-2; i>=0; i--){
    answer.push_back(v[i]);
  }
  int qs = answer.size();
  for(int i=qs-1; i>=0; i--){
    printf("%d ", answer[i]);
    // q.pop();
  }
}
