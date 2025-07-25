//https://codeforces.com/contest/2126/problem/B

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,k,n;
    cin>>t;
    while(t--){
        cin>>n>>k;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        
        if(n<k){cout<<0;}
        else{
            int c=0;
            int x=0;
            int j=0;
            while(j<n){
                if(arr[j]==0){
                    x++;
                    if(x==k){c++; x=0; j++;}
                }else{x=0;}
                j++;
            }
            cout<<c<<endl;
        }

        

        

    }

}
