#include <bits/stdc++.h> 

using namespace std;

//ARRAY RECURSION - BASIC INTIUTION

void solve(vector<int> weight, vector<int> value, int i, int W, int val, int maxW, vector <int> &ans){

	if(i >= weight.size()){
		if( W <= maxW){
			ans.push_back(val);
		}
		return;
	}

	solve(weight, value, i+1, W + weight[i], val + value[i], maxW, ans);
	solve(weight, value, i+1, W, val, maxW, ans);
}


int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector <int> ans;

	solve(weight, value, 0, 0, 0, maxWeight, ans);

	return *max_element(ans.begin(), ans.end());
}



//RECURSION

int solve1(vector<int> weight, vector<int> value, int i, int maxWeight){

  	if (i >= weight.size()) {
		  return 0;
  	}

  	int include = 0;

	if(weight[i] <= maxWeight)
		include = solve1(weight, value, i+1, maxWeight - weight[i]) + value[i];

	int exclude = solve1(weight, value, i+1, maxWeight);

	return max(include, exclude);
}


int knapsack1(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return solve1(weight, value, 0, maxWeight);
}



//RECURSION + MEMORISATION

int solveMem(vector<int> weight, vector<int> value, int i, int maxWeight, vector <vector <int>> &dp){

  	if (i >= weight.size()) {
		  return 0;
  	}

	if(dp[i][maxWeight] != -1) return dp[i][maxWeight];

  	int include = 0;

	if(weight[i] <= maxWeight)
		include = solveMem(weight, value, i+1, maxWeight - weight[i], dp) + value[i];

	int exclude = solveMem(weight, value, i+1, maxWeight, dp);

	dp[i][maxWeight] =  max(include, exclude);

	return dp[i][maxWeight];
}


int knapsackMem(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	vector <vector <int>> dp(n, vector<int> (maxWeight + 1, -1));
	return solveMem(weight, value, 0, maxWeight, dp);
}