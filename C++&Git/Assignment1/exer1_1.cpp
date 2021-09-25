// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

// the starting of program
int main()
{
    // the input, number of seconds
    long secRaw = 0;

    // the output, how many days, hours, minutes, seconds
    int hour , min , sec;

    // get input from the console
    cout << "Enter the number of seconds: " << endl;
    cin >> secRaw;
    cout << secRaw;
    /* Write your code under this line */
    sec = secRaw%60 , secRaw -= sec , secRaw /= 60;
    min = secRaw%60 , secRaw -= min , secRaw /= 60;
    hour = secRaw%24 , secRaw -= hour , secRaw /= 24;
    /* Write your code above this line */

    // output the result
    cout << " seconds = " << secRaw << " days, " << hour << " hours, " << min << " mins, " << sec << " secs." << endl;

    // end of the program
    return 0;
}
