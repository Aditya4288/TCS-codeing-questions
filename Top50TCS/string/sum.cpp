#include<bits/stdc++.h>
using namespace std;
//  Function to calculate sum of all numbers in a string//

int sumdigit(string s){
    int sum = 0;

    string temp = " ";
    for(char c : s){
        if(isdigit(c)){
            temp += c;
        }
        else{
            if (!temp.empty()) {
                    sum += stoi(temp);
                    temp = ""; // Reset temp
                }
        }
        // Add last number if string ends with digits
        if (!temp.empty()) {
            sum += stoi(temp);
        }
        
        return sum;
    }
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int result = sumdigit(s);
    cout<<result;
}