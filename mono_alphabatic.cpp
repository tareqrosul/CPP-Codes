#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string Plain = "abcdefghijklmnopqrstuvwxyz",
           Cipher = "DKVQFIBJWPESCXHTMYAUOLRGZN";
    string plain_text="ifwewishtoreplaceletters";
//    getline(cin,plain_text);
    string cipher_text="";

    int len=plain_text.length();

    for(int i =0; i<len; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(plain_text[i]==Plain[j])
            {
                cipher_text+=Cipher[j];
                break;
            }
        }
    }
    cout<<cipher_text;
    return 0;
}


