#include <iostream>
using namespace std;

int MultipleChoiceExam(string answer, string response, int n){
    
    int total = 0;
    
    for(int i = 0 ; i < n ; i++){
        if(response[i] == 'N'){
            continue;
        }
        else if(answer[i] == response[i]){
            total++;
        }
        else if(answer[i] != response[i] && (i != n-1)){
            i++;
        }
    }
    
    return total;
}

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    string answerKey, answerResponses;
	    cin>>answerKey;
	    cin>>answerResponses;
	    
	    cout<<MultipleChoiceExam(answerKey, answerResponses, N)<<endl;
	}
	return 0;
}
