#include<bits/stdc++.h>
using namespace std;
// remove vowels from a string//

string removeVowels(string s){
    string result="";
    for(int i=0;i<s.size();i++){
        char c=tolower(s[i]);
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')
            result+=s[i];
    }
    return result;
}

int main(){
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    string result = removeVowels(s);
    cout<<"String after removing vowels: "<<result<<endl;
    return 0;
}