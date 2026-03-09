#include<bits/stdc++.h>
using namespace std;

int secondsmallest(int arr[], int n){

    if(n < 2){
        cout<<"Invalid input";
        return -1;
    }   
    int fsmallest = INT_MAX;
    int ssmallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < fsmallest){
            ssmallest = fsmallest;
            fsmallest = arr[i];
        }
        else if(arr[i] < ssmallest && arr[i] != fsmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
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

    cout<<"The second smallest element in the array is: "<<secondsmallest(arr, n)<<endl;
}