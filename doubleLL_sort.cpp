#include<iostream>
using namespace std;
struct Node{
    int data;
     Node * next;
     Node * prev;
};
Node * head;
Node * tail=nullptr;

void addNode(int val){
    Node * ptr=new Node;
    ptr->data=val;
    ptr->next=nullptr;
    ptr->prev=nullptr;

    if(head==nullptr){
        head=ptr;
        tail=ptr;
    }

    else{
        tail->next=ptr;
        ptr->prev=tail;
        tail=ptr;
    }
}
void disp(){
    Node * ptr=head;
    while(ptr!=nullptr){
        cout<<"Element: "<<ptr->data<<"\n";
        ptr=ptr->next;
    }
}
void sort(){
    Node * current;
    Node * index;
    int temp;
    for(current=head;current!=nullptr;current=current->next){
        for (index=current->next;index!=nullptr;index=index->next){
            if(current->data>index->data){
                temp=current->data;
                current->data=index->data;
                index->data=temp;
            }
        }
    }
}
int main(){
    addNode(110);
    addNode(11);
    addNode(120);

    disp();

    sort();
    cout<<"Linked List adter sorting\n";
    disp();
}