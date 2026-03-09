#include<bits/stdc++.h>
using namespace std;

// Function to perform bubble sort on the array time complexity O n^2 and space complexity O 1
void bubbleSort(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        int didwap = 0;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didwap = 1;
            }
        }
        if(didwap == 0){
            break;
        }
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
    bubbleSort(arr, n);
    cout << "\nArray after sorting: ";
    for(int i = 0; i < n; i++){ 
        cout << arr[i] << " ";
    }
}