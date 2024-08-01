//запрашивает количество секунд в виде целого значения и отображает эквивалентное значение в сутках, часах, минутах и секундах.
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    const int SECONDS_PER_MINUTE = 60;
    const int MINUTES_PER_HOUR = 60;
    const int HOURS_PER_DAY = 24;

    long long totalSeconds;
    cout<<"seconds: ";
    cin>>totalSeconds;

    long long days, hours, minutes, seconds;
    
    days = totalSeconds / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY);
    hours = (totalSeconds % (SECONDS_PER_MINUTE * MINUTES_PER_HOUR * HOURS_PER_DAY)) / (SECONDS_PER_MINUTE * MINUTES_PER_HOUR);
    minutes = (totalSeconds % (SECONDS_PER_MINUTE * MINUTES_PER_HOUR)) / SECONDS_PER_MINUTE;
    seconds = totalSeconds % SECONDS_PER_MINUTE;
    
    cout<<days<<" "<<hours<<" "<<minutes<<" "<<seconds;
    return 0;
}
