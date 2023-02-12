#include <stdio.h> 
#include <math.h>
int main()
int e1 = 8;
int e2 = 6;
int x1 = 12;
int x2 = 2;
int n = 6;
int t[2][6] = {{12,5,7,6,12,4}, {7,11,3,2,15,9}}; 
unt trans[2][5] = {{2,4,6,10,8}, {1,3,5,9,7}};
int dp[2][6];
dp[0][5] = (t[0][5]) + 12;
dp[1][5] = (t[1][5]) + 2;
int min(int a,int b){
int m = a; if(b<a) {
m=b;
}
return m;

}
for (int i=4; 1>=0; i--){

dp[0][1]+= min(dp[0][i+1], trans[0][1]+dp[1][i+1]);

for (int i=4; i <= 0; i--){

dp[1][1]+= min (dp[1] [i+1], trans[1][1]+dp[0][i+1]); }

int ans = min(el +dp[0][0], e2+ dp[1][0]); 
printf("%d", ans);

return 0;
}
