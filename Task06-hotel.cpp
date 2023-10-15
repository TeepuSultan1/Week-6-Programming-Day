#include<iostream>
using namespace std;
    float calculateHotelPrices(string month,int numberOfStays);
    float studio;    
main(){
    string month;
     float tot;
    int  numberOfStays;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;
    cout<<"Enter thr number of stays: ";
    cin>>numberOfStays;
    tot=calculateHotelPrices(month,numberOfStays);

    cout<<"Apartment: "<<to_string (tot)<<"$"<<endl;
    cout<<"Studio: "<<to_string (studio)<<"$";
    


}

    float calculateHotelPrices(string month,int numberOfStays)
    {
        double apartment;
        if((month=="May"||month=="October")&&(numberOfStays<=7))
        {
            studio=(50*numberOfStays);
            apartment=(65*numberOfStays);
        }
        if(numberOfStays>7&&numberOfStays<=14)
        {
        studio=(50*numberOfStays)-((50*numberOfStays)*(.05));
        apartment=(65*numberOfStays)-((65*numberOfStays)*(0.05));
        }
        if(numberOfStays>14)
        {
        studio=((50*numberOfStays)-((50*numberOfStays)*(0.3)));
        apartment=(65*numberOfStays)-((65*numberOfStays)*(0.3));
        }    
      

        if(month=="June"||month=="September")
        {
            if(numberOfStays<=14)
            {
                studio=(numberOfStays*75);
                apartment=(numberOfStays*(68.70));
            }
            if(numberOfStays>14)
            {
                studio=(numberOfStays*75)-((numberOfStays*75)*(0.2));
                apartment=(numberOfStays*(68.70))-((numberOfStays*(68.70))*(0.2));
            }
        }
    
        
        if(month=="July"||month=="August")
        {
            if(numberOfStays<=14)
            {
                studio=(76*numberOfStays);
                apartment=(77*numberOfStays);
            }
            if(numberOfStays>14)
            {
                studio=(76*numberOfStays)-((76*numberOfStays)*(0.1));
            }
            
        }
       return apartment;
    

    }