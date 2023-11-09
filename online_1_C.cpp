#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    int sum=0;
    int odd;
    for(int i=0;i<n;i++)
    {
        cin>>odd;
        sum+=odd;
    }
    cout<<((n+1)*(n+1)-sum);
    return 0;
}