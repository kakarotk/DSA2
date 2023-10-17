#include<iostream>
#include<cstdlib>
#define MAX 5
using namespace std;
int top=-1, stack[MAX];
void push (int data){
        top=top+1;
        stack[top]=data;
}
void pop(){
    if(top==-1){
        cout<<"Underflow Condition";
    }
    else{
        cout<<"Element deleted is: "<<stack[top]<<"\n";
        top=top-1;
    }
}
void display(){
    if(top==-1){
        cout<<"Underflow Condition";
    }
    else{
        cout<<"Stack is:\n";
        for(int i=top;i>=0;--i){
            cout<<"Element: "<<stack[i]<<"\n";
        }
    }
}

int main(){
    int ch;
    while(1){
        cout<<"********Stack Menu********\n";
        cout<<"1.Push\n";
        cout<<"2.Pop\n";
        cout<<"3.Display\n";
        cout<<"4.Exit\n";

        cout<<"\nEnter you choice: ";
        cin>>ch;

        switch(ch){
            case 1:
            int val;
             if(top==MAX){
            cout<<"Overflow condtion\n";
            break;
    }
            cout<<"Enter element to push: ";
            cin>>val;
            push(val);
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);
            break;

            default:
            cout<<"Wrong input\n";

        }
    }
    return 0;
}
