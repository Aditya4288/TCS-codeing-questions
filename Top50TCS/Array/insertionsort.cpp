#include<bits/stdc++.h>
using namespace std;

// Function to perform insertion sort on the array time complexity O n^2 and space complexity O 1

void insertionSort(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        int key = arr[i+1];
        int j = i;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}   

int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout << "Array before sorting: ";
    for(int i = 0; i < n; i++){ 
        cout << arr[i] << " ";
    }
    insertionSort(arr, n);
    cout << "\nArray after sorting: ";
    for(int i = 0; i < n; i++){ 
        cout << arr[i] << " ";
    }
}