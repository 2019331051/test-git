#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,ara[300],x;

    for(i='a';i<='z';i++)ara[i]=0;

    char ss[2000];
    scanf("%s",&ss);
    n=strlen(ss);

    for(i=0;i<n;i++)
    {
        x=ss[i];
        ara[x]=1;
    }

    for(i='a';i<='z';i++)
    {

        if(ara[i]==1)printf("%c ",i);
    }

}