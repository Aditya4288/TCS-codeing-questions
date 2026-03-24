#include<bits/stdc++.h>
using namespace std;
// remove spaces from a string//

string removeSpaces(string s){
    string result="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' ' && s[i]!='\t' && s[i]!='\n')
            result+=s[i];
    }
    return result;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    string result = removeSpaces(s);
    cout<<"String after removing spaces: "<<result<<endl;
    return 0;

}