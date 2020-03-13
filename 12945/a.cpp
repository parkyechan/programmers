#include<cstdio>
#include<vector>
using namespace std;
long long arr[100001] = {};
int aa;
long long fibo(long long m){
  if(m == aa) return arr[m-1];
  arr[m+1] = arr[m] + arr[m-1];
  arr[m+1] = arr[m+1] % 1234567;
  fibo(m+1);
}
int main(){
  scanf("%d", &n);

  arr[0] = 1; arr[1] = 1;
  int answer = fibo(1);
  printf("%d", answer);
}
