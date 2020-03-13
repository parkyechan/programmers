#include <iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  vector<int>A(a), B(b);
  for(int i=0; i<a; i++){
    scanf("%d", &A[i]);
  }
  for(int i=0; i<b; i++){
    scanf("%d", &B[i]);
  }



  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  int sum = 0;
  for(int i=0; i<A.size(); i++){
    sum += A[i] * B[i];
  }
  printf("%d", sum);
}
