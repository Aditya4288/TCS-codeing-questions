#include<bits/stdc++.h>
using namespace std;

// Function to count the maximum number of consecutive ones in the array
int countones(int arr[], int n){
    int count = 0;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
        }
        else{
            count = 0;
        }
        maxi = max(maxi, count);
    }   
    return maxi;
}

int main(){
    int n ;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in 0 or 1: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result = countones(arr, n);
    cout<<"The maximum number of consecutive ones in the array is: "<<result<<endl;
}