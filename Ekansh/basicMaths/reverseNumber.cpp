#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin >> n;
    int rev = 0, sum = 0;

    while(n>0){
        rev = n%10;
        sum = sum*10 + rev;
        n=n/10;
    }

    cout<<"Reversed number is: "<<sum<<endl;
}