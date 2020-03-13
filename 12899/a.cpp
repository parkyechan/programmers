#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cin >> n;
  string answer = "";

  while(n != 0){
    if(n % 3 == 0){
      answer.insert(0, "4");
      n = n/3 - 1;
    }else{
      answer.insert(0, to_string(n%3));
      n /= 3;
    }
  }
  cout << answer;
}
