#include<iostream>
#include "math.hpp"

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    cout<<add(x,y)<<endl;
    cout<<sub(x,y)<<endl;
    cout<<mul(x,y)<<endl;
    try{
        cout<<divi(x,y)<<endl;
    }
    catch(string s)
    {
        cout<<"Exception : "<<s<<endl;
    }

}