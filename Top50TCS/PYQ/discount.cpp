#include<bits/stdc++.h>
using namespace std;

int main(){
    int price;
    cout<<"Enter the price: ";
    cin>>price;
    if (price<=0){
        cout<<"Invalid price";
    }
    else if(price < 1000){
        double discount = price * 0.05;
        double finalPrice = price - discount;
        cout<<"Discount: "<<discount<<endl;
        cout<<"Final price: "<<finalPrice;
    }
    else if(price >= 1000 && price < 5000){
        double discount = price * 0.1;
        double finalPrice = price - discount;
        cout<<"Discount: "<<discount<<endl;
        cout<<"Final price: "<<finalPrice;
    }
    else if(price >= 5000 ){
        double discount = price * 0.15;
        double finalPrice = price - discount;
        cout<<"Discount: "<<discount<<endl;
        cout<<"Final price: "<<finalPrice;
    }
    
}