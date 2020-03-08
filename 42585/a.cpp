#include<cstdio>
#include<stack>
#include<string>
#include<iostream>
using namespace std;
int main(){
  string arr;
  cin >> arr;
  int clen = arr.length();
  int cnt = 0, sum = 0;
  stack<int> s;
  for(int i=0; i<clen; i++){
    if(arr[i] == '('){
      s.push(cnt++);
    }
    else if(arr[i] == ')' && !s.empty()){
      s.pop();
      if(arr[i-1] == '(') sum += s.size();
      else sum++;
    }
  }
  printf("%d", sum);
}
