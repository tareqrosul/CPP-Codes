#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    string str="WEAREDISCOVEREDFLEEATONCE";
//string str="MYCATHASFLEAS";
    int len=str.length();
    int key=5;
    int limit=ceil(float(len)/float(key));
    string grid[limit];
    int n=0;
    for(int i =0; i<len; i++)
    {
        grid[n]+=str.substr(i,1);
        n++;
        if(n==key)
        {
            n=0;
        }
    }

    for(int i =0; i<limit; i++)
    {
        cout<<grid[i]<<endl;
    }
    cout<<endl;
    int z=0;
    string s="_";
    string encr;
    for(int i=key-1; i>=0; i--)
    {
        string enc_h1;
        string enc_h2;
        for(int j =0; j<key; j++)
        {
            enc_h1.push_back(grid[j][i]);
            enc_h2.push_back(grid[i][i-j]);
        }

        enc_h1.push_back(s[0]);
        enc_h2.erase(enc_h2.begin());
        encr+=enc_h1+enc_h2;
        encr.push_back(s[0]);
        key--;
    }
    cout<<encr;
    return 0;
}

