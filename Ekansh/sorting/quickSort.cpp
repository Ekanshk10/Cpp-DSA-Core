#include<bits/stdc++.h>
using namespace std;
int findPartition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high -1) i++;
        while(arr[j] > pivot && j>=low+1) j--;
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
void quickSort(vector<int> &arr, int low,int high){
    if(low<high){
        int partitionIndex = findPartition(arr, low, high);
        quickSort(arr, low, partitionIndex -1);
        quickSort(arr, partitionIndex +1, high);
    }
}
int main(){
    int n, x;
    cin>>n;

    vector<int> arr;
    for(int i = 0; i<n; i++){
        cin>>x;
        arr.push_back(x);
    }
    quickSort(arr, 0, n-1);

    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
}