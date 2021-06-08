#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,n;
    
    cout<<"Enter value of n "<<endl;
    cin>>n;
    
    for(i = n ; i >= 1; i--)
    {
        for(j = 1; j <= n-i ; j++)
            cout<<"*";
        for(k = 1; k <= 2 * i-1; k++)
            cout<<" ";
        for(j = 1;j <= 2*(n - i) ; j++)
            cout<<"*";
        for(l = 1 ;l <= i; l++)
            cout<<" ";
        cout<<endl;
    }
    
    for(i= 1 ;i <= n; i++)
    {
    
        for(j=1;j<=n-i;j++)
            cout<<"*";
        
        for(k=1;k<=2*i-1;k++)
            cout<<" ";
        
        for(j=1;j<=2*(n-i);j++)
            cout<<"*";
        
        for(l=1;l<=i;l++)
            cout<<" ";
            
        cout<<endl;
    }
    
    return 0;
    
}