#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
 cout<<"enter elements of first matrix :"<<endl;
 for (int i = 0; i <3; i++)
 {
    for (int j= 0; j<3; j++)
    {
        cout<<"enter element:"<<i+1<<j+1<<endl;
       cin>>a[i][j];
    }
    
 }
  cout<<"enter elements of second matrix :"<<endl;
 for (int i = 0; i <3; i++)
 {
    for (int j= 0; j<3; j++)
    {
        cout<<"enter element:"<<i+1<<j+1<<endl;
       cin>>b[i][j];
    }
    
 }
 for (int i = 0; i <3; i++)
 {
    for (int j = 0; j<3; j++)
    {
       
       c[i][j]=a[i][j]-b[i][j];
    }  
 }
 cout<<"the addition of matrix is:"<<endl;
 for (int i = 0; i<3; i++)
 {
    for (int j= 0;j<3; j++)
    {
       cout<<c[i][j]<<" ";
    }
    cout<<endl;
 }
return 0;
}