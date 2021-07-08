
#include<bits/stdc++.h>
#include<iostream>
#include<windows.h>
using namespace std;
int a=19;
int check=10;
int arr[19];
int n=0;
bool search_(int item)
{
    for(int i = 0; i<=n; i++)
    {
        if(item==arr[i])
        {
            return false;
        }
    }
    return true;
}
bool multy(int x,int y,int mod)
{
    long long lng=1;
    for(int i=1; i<=y; i++)
    {
        lng*=x;
        lng%=mod;
    }
    if(search_(lng))
    {
        arr[n]=lng;
        n++;
    }
    else
    {
        cout<<"Not a primitive root"<<endl;
        exit(0);
    }
    return true;
}

int main()
{
    for(int i =2; i<a; i++)
    {
        multy(check,i,a);
    }

    cout<<check<<" Is primitive root of "<<a<<endl;
    return 0;
}
