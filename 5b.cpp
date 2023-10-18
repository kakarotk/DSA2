#include<iostream>
using namespace std;
int arr[50];
void Selectionsort(int arr[], int n){
    int i,j,IndexofMin,temp;
    for(int i=0;i<n-1;i++){
        IndexofMin=i;

        for(j=i+1;j<n;j++){
            if(arr[j]<arr[IndexofMin]){
                IndexofMin=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[IndexofMin];
        arr[IndexofMin]=temp;
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
    Selectionsort(arr,N);
    print(arr,N);

    return 0;
}