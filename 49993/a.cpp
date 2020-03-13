#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
  vector<char> dq;
  for(int i=0; i<skill.size(); i++){
    dq.push_back(skill[i]);
  }
  vector<char>::iterator iter;
  for(int i=0; i<skill_trees.size(); i++){
    queue<char> q;
    for(int i=0; i<skill.size(); i++){
      q.push(skill[i]);
    }
    int flag = 0;
    for(int j=0; j<skill_trees[i].size(); j++){
      int dqs = dq.size();
      for(int k=0; k<dqs; k++){
        if(dq[k] == skill_trees[i][j]){
          if(dq[k] != q.front()){
            flag = 1;
            break;
          }else{
            q.pop();
          }
        }
      }
      if(flag == 1) break;
    }
    if(flag == 0) answer++;
    // printf("\n");

  }
    return answer;
}
