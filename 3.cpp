#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int a, b;
  vector<int> v;
  scanf("%d %d", &a, &b);
  for(int i=0; i<a; i++){
    int tmp;
    scanf("%d", &tmp);
    v.push_back(tmp);
  }
  sort(v.begin(), v.end());
  if(a == b){
    printf("0");
  }else{
    printf("%d", v[v.size()-b] - v[0]);
  }
}
