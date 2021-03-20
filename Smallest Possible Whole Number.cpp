#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
    while(T--){
        int n,k;
        cin >> n >>k;
        if(k == 0){
            cout<<n<<endl;
            continue;
        }
        if(k > n){
            cout<<n<<endl;
        }
        else{
            int a = n % k;
            cout<<a<<endl;  
        }
    }       
     return 0;
}
