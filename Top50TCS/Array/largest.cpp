#include<bits/stdc++.h>
using namespace std;

// Function to find the largest element in the array

int largest(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
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

    cout<<"The largest element in the array is: "<<largest(arr, n)<<endl;
}