#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];  
    }
    cout<<"Before soring: ";
    for(int i = 0; i<n; i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"After sorting: ";

    for(int i = 0; i<=n-2; i++){
        int min = i; 
        for(int j =i; j<=n-1; j++){
            if(arr[j] < arr[min]) min = j;
        }
        int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
    }
    for(int i = 0; i<n; i++){
         cout<<arr[i]<<" ";
    }

}
