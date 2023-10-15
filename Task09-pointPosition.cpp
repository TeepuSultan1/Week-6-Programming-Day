#include<iostream>
using namespace std;
    string checkPointPosition(int h,int x,int y);
main(){
    int h,x,y;
    cout<<"Enter height: ";
    cin>>h;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    cout<<checkPointPosition(h,x,y);

}

    string checkPointPosition(int h,int x,int y)
    {
        string result;
        if(x<0||y<<0||x>(2*h)||x>(4*h))
        {
            result= "Outside";
            return result;
        }
        if(x>h&&x<(2*h)&&y>h&&y<(4*h))
        {
            result="Inside";
            return result;

        }
        else
        {
            result="Border";
            return result;

        }
    }