#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string Plain="abcdefghijklmnopqrstuvwxyz",
           Cipher="DKVQFIBJWPESCXHTMYAUOLRGZN";
    string plain_text="ifwewishtoreplaceletters";
//    getline(cin,plain_text);
    string cipher_text="";

    int len=plain_text.length();

    for(int i =0; i<len; i++)
    {
        cipher_text+=Cipher[int(plain_text[i]-97)];
    }
    cout<<cipher_text;
    return 0;
}


