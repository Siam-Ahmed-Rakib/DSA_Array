#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    char str1[100],str2[300];
    cin>>str1;
    int i=0,c=1,j=0;
    while(str1[i])
    {
        if(str1[i]==str1[i+1])
            c++;
        else
        {
            str2[j++]=str1[i];
            str2[j++]=c+'0';
            c=1;
        }
        i++;
    }
    str2[j]='\0';
    cout<<str2<<endl;
    if(strlen(str1)<=strlen(str2))
        cout<<str1<<endl;
    return 0;
}
