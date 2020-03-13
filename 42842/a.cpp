#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int red) {
    vector<int> answer;
    int sum = brown + red;
    for(int i=1; i<=sum/2; i++){
        if(sum % i == 0){
            int tmp = sum / i;
            if((i-2)* (tmp-2) == red){
                if(i > tmp){
                    answer.push_back(i);
                    answer.push_back(tmp);
                }else{
                    answer.push_back(tmp);
                    answer.push_back(i);
                    break;
                }
            }
        }
    }
    return answer;
}
