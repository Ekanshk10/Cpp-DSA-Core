#include<iostream>
using namespace std;

int factorial(int n, int fact){
    if(n <= 0)return fact;
    fact = fact * n;

    factorial(n-1, fact);
}
int main(){
    int n, fact = 1;

    cin>>n;

    int ans = factorial(n, fact);
    cout<<ans;
}