#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    int left = 0;
    int right = s.length() - 1;

    while(left < right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;

}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    string result = reverse(s);
    cout<<result<<endl;

}