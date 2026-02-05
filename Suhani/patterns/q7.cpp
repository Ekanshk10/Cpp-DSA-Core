#include<iostream>
using namespace std;

int main(){
    int n;
    int space, stars = 1;
    cout << "Enter the value of n";
    cin >> n;
    space = n;
    for(int row = 1 ; row <= n; row++){

        for(int i = space ; i > 1; i--){
            cout << " ";
      }

        for(int j = 1; j<= stars ; j++){
            cout << "*";
        }
        for(int i = space ; i > 1; i--){
            cout << " ";
        }

        space--;
        stars += 2;
        cout << endl;
    }

}