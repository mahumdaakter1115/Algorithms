#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int line =1;
    for(int i=1; i<n*2; i+=2)
    {
        for(int s=1; s<=((n*2-1)-i)/2; s++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {

            if(line>1 && line%2==0)cout<<'<';
            else cout<<'>';
        }
        for(int s=1; s<=((n*2-1)-i)/2; s++)
        {
            cout<<" ";
        }
        cout<<endl;
        line++;
    }

    for(int i=n*2-3; i>=1; i-=2)
    {
        for(int s=1; s<=((n*2-1)-i)/2; s++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {

            if(line>1 && line%2==0)cout<<'<';
            else cout<<'>';
        }
        for(int s=1; s<=((n*2-1)-i)/2; s++)
        {
            cout<<" ";
        }
        cout<<endl;
        line++;
    }

    return 0;
}

