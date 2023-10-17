#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
};
struct LinkedList{
    Node * head=new Node;
    LinkedList(){
        head=NULL;
    }

    void push(int val){
        Node * ptr =new Node;
        ptr->data=val;
        ptr->next=head;
        head=ptr;
    }

    void disp(){
        Node * ptr=head;
        while(ptr!=NULL){
            cout<<"Element: "<<ptr->data<<"\n";
            ptr=ptr->next;
        }
    }
    void reverse(){
        Node * next=NULL;
        Node * current=head;
        Node * prev=NULL;
        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
};
int main (){
    LinkedList ll;
    ll.push(8);
    ll.push(106);
    ll.push(1);
    ll.push(989);

    cout<<"The Linked List is: \n";
    ll.disp();

    cout<<"Linked list after reversal: \n";
    ll.reverse();
    ll.disp();

    return 0;

}