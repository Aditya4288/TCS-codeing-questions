#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int>& arr, int n){
    int maxi =  INT_MIN;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int result = maxSubArraySum(arr, n);
    cout << "The maximum subarray sum is: " << result << endl;
}