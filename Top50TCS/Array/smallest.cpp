#include<bits/stdc++.h>
using namespace std;

// Function to find the smallest element in the array

int smallest(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
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

    cout<<"The smallest element in the array is: "<<smallest(arr, n)<<endl;
}