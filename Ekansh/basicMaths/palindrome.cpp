#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int originalNo = n;


    int rev = 0, sum = 0;

    while(n>0){
        rev = n%10;
        sum = sum*10 +rev;
        n/=10;
    }

    if(sum == originalNo){
        cout<<"Number is palindrome"<<endl;
    }
    else{
        cout<<"Number is not a palindrome"<<endl;
    }
}