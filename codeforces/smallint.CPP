//https://codeforces.com/contest/2126/problem/A


#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,t;
    cin>>t;
    while(t--){
        cin>>x;
        y=x%10;
        while(x>0){
            y=min(y,(x%10));
            x=x/10;
        }
        cout<<y<<endl;

    }
    return 0;
}
