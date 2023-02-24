#include <iostream>
#include <vector>
using namespace std;

//TLE
int solve(int n, int x, int y, int z){

	if(n < 0){
		return -1000000;
	}

	if(n == 0){
		return 0;
	}

	int ans1 = 1 + solve(n - x, x,y,z);
	int ans2 = 1 + solve(n - y, x,y,z);
	int ans3 = 1 + solve(n - z, x,y,z);

	int max1 =  max(ans1, ans2);
	int max2 =  max(max1, ans3);

	return max2;
	
}


int cutSegments(int n, int x, int y, int z) {

	
	int ans = solve(n, x, y, z);

	if(ans < 0) return 0;
	return ans;
}


//RECURSION + MEMORIZATION

int solve1(int n, int x, int y, int z, vector <int> &dp){

	if(n < 0){
		return INT_MIN;
	}

	if(n == 0){
		return 0;
	}

	if(dp[n] != -1) return dp[n];

	int ans1 = 1 + solve1(n - x, x,y,z, dp);
	int ans2 = 1 + solve1(n - y, x,y,z, dp);
	int ans3 = 1 + solve1(n - z, x,y,z, dp);

	dp[n] =  max(ans3, max(ans1, ans2));

	return dp[n];
}

int cutSegments1(int n, int x, int y, int z) {

	vector <int> dp(n+1, -1);
	dp[0] = 0;
	int ans = solve1(n,x,y,z,dp);

	if(ans < 0) return 0;
	return ans;
}

int main(){
  
  return 0;
}