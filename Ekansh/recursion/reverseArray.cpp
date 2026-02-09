#include<iostream>
using namespace std;

void reverseArray(int a[], int start, int end){
    
    if(start >= end) return;

    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    
    reverseArray(a, start+1, end-1);
}

int main(){
    int a[5] = {1,2,3,4,5};
    int n = 5;

    reverseArray(a, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
