#include<bits/stdc++.h>
using namespace std;

int main(){
    string start;
    int n;
    cout << "Enter the starting day: ";
    cin>> start;
    cout << "Enter the number of days: ";
    cin >> n;

    map<string,int> day;
     day["sun"] = 1;
     day["mon"] = 2;    
     day["tue"] = 3;
     day["wed"] = 4;
     day["thu"] = 5;
     day["fri"] = 6;
     day["sat"] = 7;
    int startDay = day[start];

    int daytosun = (7 - (startDay - 1)) % 7; // Calculate days require to reach next Sunday
    int count = 0;

    if(daytosun <= n){
        count = 1+ (n - daytosun) / 7; // Count the first Sunday if it falls within the given days
    }

    cout << "Number of Sundays: " << count << endl;
}   