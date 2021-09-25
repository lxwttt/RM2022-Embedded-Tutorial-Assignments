// I/O stream library from std, for using cin and cout
#include <iostream>
#include <cmath>
using namespace std;

// the starting of program
int main()
{
    // the input, a float number of hours
    float hourRaw = 0;

    // the output, how many hours, minutes, seconds
    int hour = 0, min = 0, sec = 0;

    // get input from the console
    cout << "Enter the float number of hours: " << endl;
    cin >> hourRaw;
    hour = floor(hourRaw);
    cout << hourRaw << " hours = " << hour << " hours, ";
    /* Write your code under this line */
    hourRaw -= hour , hourRaw *= 60;
    min = floor(hourRaw);
    hourRaw -= min , hourRaw *= 60;
    sec = floor(hourRaw);
    /* Write your code above this line */

    // output the result
    cout << min << " mins, " << sec << " secs." << endl;

    // end of the program
    return 0;
}
