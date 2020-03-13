  #include<string>
#include<vector>
#include<cstdio>
#include<iostream>

using namespace std;
int main(){
  int n;
  scanf("%d", &n);
  vector<string> phone_book;
  for(int i=0; i<n; i++){
    string tmp;
    cin >> tmp;
    phone_book.push_back(tmp);
  }

  for(string s1:phone_book){
    for(string s2:phone_book){
      if(s1 == s2) continue;
      else if(s1.length() > s2.length()){
        if(s2 == s1.substr(0, s2.length()))
          return false;
      }
    }
  }
  return true;
}
