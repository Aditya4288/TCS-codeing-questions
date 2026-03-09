/*The Airport Security Gate (Array/Logic)
​Scenario: At an airport, N passengers are standing in a queue. Each passenger has a luggage weight. The security gate only allows passengers with weights that are "balanced." A weight is balanced if it is a prime number. Move all "unbalanced" luggage (non-prime) to the end of the queue while maintaining the relative order of the balanced ones.
​Input: * n: Number of passengers
​arr[]: Array of luggage weights
​Output: The modified queue.
​Example:
​Input: 5, [3, 10, 7, 4, 13]
​Output: 3 7 13 10 4
*/
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main(){
    int n ;
    cout << "Enter the number of passengers: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the luggage weights: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }       

    int count = 0;
    for(int i = 0; i < n; i++){ 
        if(isPrime(arr[i])){
            swap(arr[i], arr[count]);
            count++;
        }
    }

    cout << "Modified queue: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}