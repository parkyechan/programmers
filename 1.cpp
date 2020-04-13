#include<cstdio>
#include<vector>
using namespace std;
int main(){
  int n;
  scanf("%d", &n);
  vector<int> v;
  if(n % 2 == 0){
    while(n/2){
      n -= 2;
      v.push_back(1);
    }
  }else{
    while(n/4){
      n -= 2;
      v.push_back(1);
    }
    v.push_back(7);
  }
  while(v.size()){
    printf("%d", v.back());
    v.pop_back();
  }
}
