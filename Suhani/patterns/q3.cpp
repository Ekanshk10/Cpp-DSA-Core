#include<iostream>
using namespace std;

int main(){
    int n, k= 1;
    cout << "Enter the value of n\n";
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 1; j <= k; j++){
            cout << j << " ";
        }
        k++;
        cout << endl;
    }
}