#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    char str[200];
    cin>>str;
    char *out=new char[strlen(str)];
    int a[26];
    for(int i=0;i<26;i++)
        a[i]=0;
    int i=0;
    while(str[i])
    {
        int b=str[i]-'a';
        a[b]=a[b]+1;
        i++;
    }
    int c=1,j=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]%2)
        {
            c=0;
            break;
        }
        else if(a[i])
            out[j++]=i+'a';
    }
    out[j]='\0';
    if(c==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<out<<endl;
        for(i=strlen(out)-1;i>=0;i--)
            cout<<out[i];
    }
    return 0;
}