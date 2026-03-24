#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s){
    int left=0,right=s.size()-1;
    while(left<right){
        if(!isalnum(s[left])){
            left++;
            continue;
        }   
        else if(!isalnum(s[right])){
            right--;
            continue;
        }
        else if(tolower(s[left])!=tolower(s[right]))
            return false;
        left++;
        right--;
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    if(isPalindrome(s))
        cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";
    return 0;
}