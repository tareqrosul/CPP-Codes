#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int m_matrix[2][2]= {{2,1},{3,4}};
int modulo_inverse(int x)
{
    for(int i =1; i<26; i++)
    {
        if((x*i)%26 ==1 && __gcd(i,26)==1)
        {
            return i;
        }
    }
}
int modular_inverse(int m)
{
    float x=(float)m;
    int temp;
    if(x>1)
    {
        return m%26;
    }
    else
    {
        x=abs(x);
        return ceil(x/26)*26-x;
    }
}
void reverse_determinent(int m_mat[2][2])
{
    int det=(m_mat[0][0]*m_mat[1][1]-m_mat[1][0]*m_mat[0][1]);
    det=modulo_inverse(det);
    cout<<"DET "<<det<<endl;
    cout<<endl;
    int temp=m_mat[0][0];
    m_mat[0][0] = modular_inverse(det*m_mat[1][1]);
    m_mat[1][1] = modular_inverse(det*temp);
    m_mat[0][1] *=modular_inverse(det*-1);
    m_mat[1][0] *=modular_inverse(det*-1);
    for (int i = 0; i <= 1; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout <<"  "<< m_mat[i][j] <<"    ";
        }
        cout<<endl<<endl;
    }
    m_matrix[2][2]=m_mat[2][2];
}
int main()
{
	reverse_determinent(m_matrix);
    return 0;
}


