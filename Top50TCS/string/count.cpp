#include<bits/stdc++.h>
using namespace std;
//count number of vowle space and consonant in a string//

int solve(string s,int length){
    int vowel=0,space=0,consonant=0;
    for(int i=0;i<length;i++){
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<length;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            vowel++;
        else if(s[i]==' ')
            space++;
        else if(s[i]>='a'&&s[i]<='z')
            consonant++;
    }
    cout<<"Vowels: "<<vowel<<endl;
    cout<<"Spaces: "<<space<<endl;
    cout<<"Consonants: "<<consonant<<endl;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    int length=s.size();
    solve(s,length);
    return 0;
    
}