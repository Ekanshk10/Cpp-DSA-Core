#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i<5; i++){
        for(char c = 'A'; c<='A'+5-i-1; c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}