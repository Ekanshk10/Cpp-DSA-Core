#include<iostream>
using namespace std;

int main(){
    int n = 14343;

    int count = 0;

    while(n>0){
        count++;
        n = n/10;
    }

    cout<<"Total numbers of digits are: "<<count<<endl;
}