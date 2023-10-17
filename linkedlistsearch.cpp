#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
};

struct LinkedList{
    Node * head=new Node;
    LinkedList(){
        head=nullptr;
    }

    void push(int val){
        Node * ptr=new Node;
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
    void search(int val){
        Node * ptr=head;
        int i=0;
        while(ptr!=NULL){
            if(ptr->data==val){
                cout<<"Element found at "<<i+1;
                return;
            }
            else {
                ptr=ptr->next;
                i++;
            }
        }
        if(ptr==NULL &&ptr->data!=val){
            cout<<"ELement not found";
        }
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

    ll.search(106);
}