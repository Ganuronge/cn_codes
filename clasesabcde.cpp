#include<iostream>
using namespace std; 
int main()
        { 
        int a[4],i=0;
        cout<<"Enter The IP address";
        for(i=0;i<4;i++)
        cin>>a[i];
        cout<<"The IP address is in Class: ";
        if(a[0]>=0 && a[0]<=127)
        cout<<"Class A";
        if(a[0]>127 && a[0]<191)
        cout<<"Class B";
        if(a[0]>191 && a[0]<224)
        cout<<"Class C";
        if(a[0]>224 && a[0]<=239)
        cout<<"Class D";
        if(a[0]>239)
        cout<<"Class E";
        return 1;
        }
 
