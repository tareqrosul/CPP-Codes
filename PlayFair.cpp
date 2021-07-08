#include<bits/stdc++.h>
using namespace std;
string unique_="";
int check(char ch)
{
    for(int i =0; i<unique_.length(); i++)
    {
        if (ch==unique_[i])
        {
            return 0;
        }
    }
    unique_+=ch;
}


int main()
{
    string str="ENGINEER";
    for(int i =0; i<str.length(); i++)
    {
        check(str[i]);
    }
    string trimed=unique_;
    cout<<trimed<<endl<<endl;

    string alpha;
    for(int i = 65; i<91; i++)
    {
        alpha+=char(i);
    }
    for(int i = 0; i<26; i++)
    {
        check(alpha[i]);
    }

    size_t f=unique_.find("J");
    size_t f1=unique_.find("I");
    if(f>f1)
    {
        unique_.erase(f,1);
    }
    if(f1>f)
    {
        unique_.erase(f1,1);
    }

    int var1=0,var2=5;
    string s[9];
    for(int i = 0; i<5; i++)
    {
        s[i]=unique_.substr(var1, var2);
        cout<<"["<<s[i][0]<<"]"<<"["<<s[i][1]<<"]"<<"["<<s[i][2]<<"]"<<"["<<s[i][3]<<"]"<<"["<<s[i][4]<<"]"<<endl;
        var1+=5;
    }

    return 0;
}
