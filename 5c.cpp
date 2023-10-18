#include<iostream>
using namespace std;
int arr[50];
void InsertionSort(int arr[], int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;

        while( j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
}
int main (){
    int arr[]={5,9,6,3,2,1,4,7};
    int N=sizeof(arr)/sizeof(arr[0]);
    
    print(arr,N);
    cout<<"Sorted\n";
    InsertionSort(arr,N);
    print(arr,N);

    return 0;
}