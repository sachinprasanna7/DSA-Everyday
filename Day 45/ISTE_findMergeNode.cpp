
 #include <iostream>
 #include <unordered_map>
 using namespace std;
 
 int main(){
   
   return 0;
 }
 
 
 class SinglyLinkedListNode {
      int data;
      SinglyLinkedListNode* next;
 };
 
 
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    unordered_map <SinglyLinkedListNode*, int> mpp;
    
    int start = 0;
    while(head1 != nullptr){
        mpp[head1] = start++;
        head1 = head1 -> next;
    }
    
    
    while(head2 != nullptr){
        SinglyLinkedListNode* temp = head2 -> next;
        if (mpp.find(temp) != mpp.end()){
            return temp -> data;
        }
        head2 = head2 -> next;
    }
    
    return -1;

}