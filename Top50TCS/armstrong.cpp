#include<bits/stdc++.h>
using namespace std;

int powerCalc(int base, int p){
    int res = 1;
    while(p--){
        res *= base;
    }
    return res;
}

bool isArmstrong(int n){
    int dup = n;
    int sum = 0;
    int power = to_string(n).length();

    while(n > 0){
        int ld = n % 10;
        sum += powerCalc(ld, power);
        n /= 10;
    }

    return dup == sum;
}

int main(){
    int n = 153;

    if(isArmstrong(n)){
        cout << "Yes";
    }else{
        cout << "No";
    }
}