#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums, int n) {
    int count = 0;
    int el;

    for(int i = 0; i < n; i++){
        if(count == 0){
            count = 1;
            el = nums[i];
        }
         else if(nums[i] == el){
            count++;
        }
        else{
            count--;
        }
    }  
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == el){
            cnt1++;
        }
    }
    
    if(cnt1 > n/2){
        return el;
    }
    else{
        return -1; // No majority element found
    }   
}

int main(){
    int n ;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = majorityElement(arr, n);
    if(result == -1){
        cout << "No majority element found." << endl;
    }
    else{
        cout << "Majority element is: " << result << endl;
    }
}