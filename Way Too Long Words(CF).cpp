#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    //cout<<s[0];
        int len=s.length();
        if(s.length()<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
    }
    return 0;
}
