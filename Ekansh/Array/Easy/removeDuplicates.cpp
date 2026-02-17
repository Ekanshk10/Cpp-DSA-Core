#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int i =0;

    for(int j = 1; j<a.size(); j++){
        if(a[i]!=a[j]){
            i++;
            a[i] = a[j];
        }
    }

    cout<<"Unique elements: ";
    
    for(int x= 0; x<i+1; x++){
        cout<<a[x]<<" ";
    }
}
