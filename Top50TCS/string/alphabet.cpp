#include<bits/stdc++.h>
using namespace std;
// remove elements other than alphabets from a string//

string removenonalpha(string s){
    string result = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
            result+=s[i];
    }
    return result;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    string result = removenonalpha(s);
    cout<<"String after removing non-alphabetic characters: "<<result<<endl;
    return 0;
}