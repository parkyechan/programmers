#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
string arr;
int answer = 0;
int slen;
int frontlen(int cur){
  for(int i=cur; i<slen; i++){
    if(arr[i] != 'A'){
      cur = i;
      break;
    }
  }
  printf("flen cur : %d\n", cur);
  return cur;
}
int backlen(int cur){
  for(int i=slen-1; i>=cur; i--){
    if(arr[i] != 'A'){
      cur = i;
    }
  }
  printf("blen cur : %d\n", cur - 1);
  return cur - 1;
}
int main(){
  cin >> arr;
  int tt = arr.length();
  slen = tt;
  int cur = 0, cnt = 0;
  while(1){
    if(cnt == slen - 1) break;
    int flen = abs(frontlen(cur) - cur);
    int blen = abs(slen - 1 - backlen(cur) + cur);
    if(flen > blen){
      answer += blen;
      cur--;
      if(cur == -1) cur = slen - 1;
      answer++;
    }else{
      answer += arr[cur] - 'A';
      cur++;
      answer++;
    }
    cnt++;
  }
  printf("%d", answer);
}
