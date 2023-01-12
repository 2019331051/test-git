#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--){
    long long int n,i,j,x,y,z,odd=0,even=0,flag=1,ans=0;
    cin>>n;

    long long int ara[2*n+10],ara1[2*n+10],ara2[2*n+10];

    for(i=1;i<=n;i++)
    {
        cin>>ara1[i];
    }

    for(i=1;i<=n;i++)
    {
        cin>>ara2[i];
    }

    sort(ara1+1,ara1+n+1);
    sort(ara2+1,ara2+n+1);
    x=n/4;

    for(i=n;i>x;i--)
    {
        even+=ara1[i];
        odd+=ara2[i];
    }
    z=x;
    while(1)
    {
        if(even>=odd)break;
        ara1[++n]=100;
        even+=100;
        if(n%4==0)
        {
            even-=ara1[++x];
            
        }
        if(z>0 && n%4!=0)
        {
            odd+=ara2[z];
            z--;
        }
        ans++;
        
    }   
    cout<<ans<<endl;
   

}
}