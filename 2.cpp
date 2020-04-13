#include<cstdio>
#include<vector>
int dx[3] = {1, 0, 1};
int dy[3] = {0, -1, -1};
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    int a, b;
    int arr[101][101] = {};
    scanf("%d %d", &a, &b);
    for(int j=0; j<a; j++){
      for(int k=0; k<b; k++){
        scanf("%d", &arr[j][k]);
      }
    }
    for(int j=0; j<a; j++){
      for(int k=0; k<b; k++){
        if(arr[j][k] == 1 || arr[j][k] == 2){
          int flag = 0;
          for(int t=0; t<3; t++){
            int xx = arr[j][k] + dx[t];
            int yy = arr[j][k] + dy[t];
            if(xx >= 0 && xx <= b && yy >= 0 && yy <= a){
              if(arr[yy][xx] == 1 || arr[yy][xx] == 2)flag++;
            }
          }
          if(flag == 3){
            arr[j][k] = 2;
            for(int t=0; t<3; t++){
              int xx = arr[j][k] + dx[t];
              int yy = arr[j][k] + dy[t];
              if(xx >= 0 && xx <= b && yy >= 0 && yy <= a){
                if(arr[yy][xx] == 1) arr[yy][xx] = 2;
              }
            }
          }
        }
      }
    }
    int ff = 0;
    for(int j=0; j<a; j++){
      for(int k=0; k<b; k++){
        if(arr[j][k] == 1){
          ff = 1;
        }
      }
    }
    if(ff == 0) printf("YES\n");
    else printf("NO\n");
  }
}
