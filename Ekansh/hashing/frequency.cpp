#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int, int> um;

    for(int i = 0; i<n; i++){
        um[arr[i]]++;
    }
    cout<<"Frequencies"<<endl;

    for(auto it : um){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}