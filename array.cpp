#include<iostream>
using namespace std;
int arr[15];
int n;
void disp(){
    for(int i=0;i<n;i++){
        cout<<"Element: "<<arr[i]<<"\n";
    }
}
void search(int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<"Element found at: "<<i+1<<"\n";
            break;
        }
    }
    cout<<"Element not present\n";
}
void Sort(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Array Sorted\n";
}
void reverse(){
    int i,j=n-1,temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main (){
    int ch;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(1){
        cout<<"1.Display\n";
        cout<<"2.Search\n";
        cout<<"3.Sort\n";
        cout<<"4.Reverse\n";
        cout<<"5.Exit\n";

        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1:
            disp();
            break;

            case 2:
            int data;
            cout<<"Enter a value to search: ";
            cin>>data;
            search(data);
            break;

            case 3:
            Sort();
            break;

            case 4:
            reverse();
            break;

            case 5:
            exit(0);
            break;

            default:
            cout<<"Wrong input\n";

        }
    }
    return 0;
}