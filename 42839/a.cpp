#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
string c;
int chk[1001] = {};
int p;
int DFS(int L, string s){
  if(L == c.size()){
    // return stoi(res);
  }else{
    for(int i=0; i<p; i++){
      if(chk[i] == 0){
        chk[i] = 1;
        // s.insert(0, c[i]);
        DFS(i, s);
        chk[i] = 0;
      }
    }
  }
}

int main(){
  string numbers;
  cin >> numbers;


  c = numbers;
  p = numbers.length();
  string tmp;
  DFS(0, tmp);
}
