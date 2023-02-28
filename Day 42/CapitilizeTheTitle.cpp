#include <iostream>
using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        
        int startPtr = 0;
        int endPtr = 0;

        title += ' ';

        for(int i = 0; i < title.size() ; i++){
            
            if(title[i] == ' '){
                if(endPtr - startPtr > 2){
                    title[startPtr++] = toupper(title[startPtr]);
                    for(int j = startPtr ; j < endPtr ; j++){
                        title[j] = tolower(title[j]);
                    }
                    endPtr = i+1;
                    startPtr = i+1;
                }
                else{
                    title[startPtr++] = tolower(title[startPtr]);
                    title[startPtr++] = tolower(title[startPtr]);
                    endPtr = i+1;
                    startPtr = i+1;
                }
            }

            else{
                endPtr++;
            }
        }
        title.pop_back();
        return title;
    }
};


//SLIGHTLY OPTIMISED

class Solution {
public:
    string capitalizeTitle(string title) {
        
        int startPtr = 0, endPtr = 0;
        title += ' ';

        for(int i = 0; i < title.size() ; i++){
            
            if(title[i] == ' '){
                if(endPtr - startPtr > 2){
                    title[startPtr++] = toupper(title[startPtr]);
                    for(int j = startPtr ; j < endPtr ; j++) title[j] = tolower(title[j]); 
                }
                else{
                    title[startPtr++] = tolower(title[startPtr]);
                    title[startPtr++] = tolower(title[startPtr]);
                }
                endPtr = startPtr = i+1;
            }

            else endPtr++;
        }
        title.pop_back();
        return title;
    }
};

int main(){
  
  return 0;
}