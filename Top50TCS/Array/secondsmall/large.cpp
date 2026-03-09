#include<bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n){

    if(n < 2){
        cout<<"Invalid input";
        return -1;
    }   
    int flargest = INT_MIN;
    int slargest = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > flargest){
            slargest = flargest;
            flargest = arr[i];
        }
        else if(arr[i] > slargest && arr[i] != flargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
    int n ;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";  
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"The second largest element in the array is: "<<secondlargest(arr, n)<<endl;
}