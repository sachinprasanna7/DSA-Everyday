#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {

        int n = capital.size();
        vector<pair<int, int>> projects(n);
        for (int i = 0; i < n; i++) {
            projects[i] = {capital[i], profits[i]};
        }
        
        sort(projects.begin(), projects.end());

        priority_queue<int> pqq;
        int i = 0;

        while (k--) {
            
            while (i < n && projects[i].first <= w) {
                pqq.push(projects[i].second);
                i++;
            }
            if (pqq.empty()) break;
            w += pqq.top();
            pqq.pop();
        }

        return w;
    }
};

int main(){
  
  return 0;
}