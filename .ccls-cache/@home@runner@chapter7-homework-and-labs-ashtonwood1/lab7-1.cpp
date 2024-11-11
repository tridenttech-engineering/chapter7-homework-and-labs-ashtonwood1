//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	   
    int day = 0;
    int totaltexts = 0;
    int dailytexts = 0;
    double average = 0.0;

    for (day = 1; day < 8; day += 1)
{ 
    cout << " How many text messages did you send on day " << day << "? ";
    cin >> dailytexts;
    totaltexts += dailytexts;
}
average = static_cast<double>(totaltexts)/(day-1);
cout << fixed << setprecision(0);
cout << endl << "You sent approximately " << average << " text messages per day." << endl;
    

    return 0;
}   //end of main function