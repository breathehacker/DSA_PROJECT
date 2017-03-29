//breathehacker
///
///
#include <iostream>
using namespace std;
struct node {
    int val;
    node *next;
};
int main(){
        node *start=new node;
        start  ->val=0;
    start->next=start;
        node *temp=start;
    for (int i=0; i<=7; i++) {
        cout<<"Enter the value :\t";
        int v;
        cin>>v;
        temp=start->next;
        while (temp->next!=start) {
                temp=temp->next;
            }
            node *newNOde=new node;
            newNOde->val=v;
            newNOde->next=start;
            temp->next=newNOde;
        
    }
    temp=start->next;
    while (temp!=start) {
        cout<<temp->val<<"\t";
        temp=temp->next;
    }
       
}