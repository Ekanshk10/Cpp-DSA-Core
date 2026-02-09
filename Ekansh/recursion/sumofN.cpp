#include<iostream>
using namespace std;

int totalSum(int n, int sum){
        if(n<=0) return sum;

        sum = sum + n;
        totalSum(n - 1, sum);
}
int main(){
    int n, sum = 0;
    cin>>n;
    int ans = totalSum(n, sum);

    cout<<ans;
}