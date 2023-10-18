#include<iostream>
using namespace std;
int arr[50];
void BubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for (int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    BubbleSort(arr,N);
    print(arr,N);

    return 0;
}