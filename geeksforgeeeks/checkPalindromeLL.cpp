//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  private:

    void print(Node* head){
        Node* temp = head;

        while(temp != NULL){
            cout << temp ->data << " ";
            temp = temp->next;
        }
        cout <<  endl;
    }
    Node* getMid(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        return slow;
    }
    Node* reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* temp = NULL ;
        
        while(temp != NULL){
            temp = temp->next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    // bool solve(Node * head)
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head == NULL || head->next == NULL)
            return true;


        print(head);
            
        // get middle
        Node* mid = getMid(head);

        cout << "mid->data= "<< mid->data << endl;
        print(mid->next);
        
        
        // reverse after middle
        Node* temp = mid->next;
        mid->next = reverse(temp);
        cout << "After reverse... " << endl;
        print(head);
        
        Node* head1 = head;
        Node* head2 = mid->next;
        
        while(head2 != NULL){
            if(head -> data != head2->data){
                return false;
            }
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        
        return true;
    }

};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends