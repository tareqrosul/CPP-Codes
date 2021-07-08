#include<iostream>
#include<cmath>
using namespace std;
int main(){
string str="WEAREDISCOVEREDFLEEATONCE";
//string str="MYCATHASFLEAS";
int len=str.length();
int key=5;
int limit=ceil(float(len)/float(key));
string grid[limit];
int n=0;
for(int i =0;i<len;i+=key){
    grid[n]=str.substr(i,key);
    n++;
}
int x=grid[n-1].length();
string fill_="XYZ";
if(x<key){
for(int i=0;i<key-x;i++){
    grid[n-1]+=fill_.substr(i,1);
}
}
for(int i =0;i<limit;i++){
    cout<<grid[i]<<endl;
}
cout<<endl;
int ar[key]={1,3,0,2};
string enc_v[key];
for(int i=0;i<key;i++){
    for(int j=0;j<limit;j++){
        enc_v[i]+=grid[j][ar[i]];
    }
    cout<<enc_v[i]<<endl;
}
return 0;
}
