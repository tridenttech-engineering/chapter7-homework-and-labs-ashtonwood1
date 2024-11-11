//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Ashton Wood> on <11/6/24>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day = 0;
        int totaltexts = 0;
        int dailytexts = 0;
        double average = 0.0;

          while (day < 7)
        
    { day += 1;
            
        cout << " How many text messages did you send on day " << day << "? ";
        cin >> dailytexts;
        totaltexts += dailytexts;
    }
    average = static_cast<double>(totaltexts)/(day);
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately " << average << " text messages per day." << endl;
    return 0;
}   //end of main function