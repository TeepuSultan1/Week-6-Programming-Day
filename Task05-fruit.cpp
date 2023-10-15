#include<iostream>
using namespace std;
    float calculateFruitPrice(string fruit,string dayOfWeek,double quantity);
main(){
    string fruit,dayOfWeek;
    double quantity;
    cout<<"Enter fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week: ";
    cin>>dayOfWeek;
    cout<<"Enter Amount: ";
    cin>>quantity;
    cout<<calculateFruitPrice(fruit,dayOfWeek,quantity);
}

    float calculateFruitPrice(string fruit,string dayOfWeek,double quantity)
    {
        float tot;
        if(dayOfWeek=="Saturday"||dayOfWeek=="Sunday")
        {
            if(fruit=="banana")
            {
                tot=(2.70)*quantity;
            }
            if(fruit=="apple")
            {
                tot=(1.25)*quantity;
            }
            if(fruit=="orange")
            {
                tot=(0.90)*quantity;
            }
            if(fruit=="grapefruit")
            {
                tot=(1.60)*quantity;
            }
            if(fruit=="kiwi")
            {
                tot=(3.00)*quantity;
            }
            if(fruit=="pineapple")
            {
                tot=(5.60)*quantity;
            }
            if(fruit=="grapes")
            {
                tot=(4.20)*quantity;
            }
            return tot;

        }
            else
            {
                if(fruit=="banana")
            {
                tot=(2.50)*quantity;
            }
            if(fruit=="apple")
            {
                tot=(1.20)*quantity;
            }
            if(fruit=="orange")
            {
                tot=(0.85)*quantity;
            }
            if(fruit=="grapefruit")
            {
                tot=(1.45)*quantity;
            }
            if(fruit=="kiwi")
            {
                tot=(2.70)*quantity;
            }
            if(fruit=="pineapple")
            {
                tot=(5.50)*quantity;
            }
            if(fruit=="grapes")
            {
                tot=(3.85)*quantity;
            }
            return tot;

            }
    }