#include<vector>
#include<cstdio>
#include<string>
using namespace std;
int main(){
  int n;
  vector<int> prices;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int tt;
    scanf("%d", &tt);
    prices.push_back(tt);
  }



   vector<int> answer;
   vector<int>::iterator iter;
   for(int i=0; i<prices.size(); i++){
       int s = 0;
       for(iter = prices.begin()+i; iter != prices.end(); iter++){
           if(prices[i] > *iter && iter != prices.end()-1){
               answer.push_back(s);
               break;
           }else if(iter != prices.end()-1){
               s++;
           }else{
             answer.push_back(s);
           }
       }
   }
   for(int i=0; i<answer.size(); i++){
     printf("%d ", answer[i]);
   }
}
