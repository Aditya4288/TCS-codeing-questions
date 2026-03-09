#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n ;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }       

    int count = 0;
    for(int i = 0; i < n; i++){ 
        if(arr[i] != 0){
            swap(arr[i], arr[count]);
            count++;
        }
    }

    cout << "Array after moving zeros to the end: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}