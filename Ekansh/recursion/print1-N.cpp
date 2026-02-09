#include<iostream>
using namespace std;

void print1ToN(int n, int count){
    if(count > n) return;
    cout<<count<<"\t";

    print1ToN(n, count+1);
}
int main(){
    int n, count = 0;
    cin>>n;
    print1ToN(n, count +1);
}