#include<iostream>
using namespace std;
main(){
    string temp,hum;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>hum;
    if(hum=="dry")
    {
        if(temp=="warm")
        {
            cout<<"Recommended activity: Play tennis";
        }
        else if(temp=="cold")
        {
            cout<<"Recommended activity: Play basketball";
        }
    }

    if(hum=="humid")
    {
        if(temp=="warm")
        {
            cout<<"Recommended activity: Swim";
        }
        else if(temp=="cold")
        {
            cout<<"Recommended activity: Watch TV";
        }
    }





}