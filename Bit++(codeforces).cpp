#include<iostream>
using namespace std;
int main()
{
    int n ;
    string s;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x<<endl;
}
