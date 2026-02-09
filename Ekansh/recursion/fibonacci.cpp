#include<iostream>
using namespace std;
void fibonnaci(int n, int sum, int a, int b){
    if(n<=0)return;

    sum = a+b;
    cout<<sum<<"\t";
    b = a;
    a = sum;

    fibonnaci(n - 1, sum, a, b);

}
int main(){

    int n = 6;
    int sum = 0, a = 1, b = 0;
    cout<< "0"<<"\t"<<"1"<<"\t";
    fibonnaci(n-1, sum, a, b);
}