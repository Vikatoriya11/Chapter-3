//запрашивает широту в градусах, минутах и секкундах, после чего отображает широту в десятичном формате.
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    const double a = 60.0;
    const double b = 3600.0;
    
    int degrees, minutes, seconds;
    
    cout<<"degress: ";
    cin>>degrees;
    
    cout<<"minutes: ";
    cin>>minutes;
    
    cout<<"seconds: ";
    cin>>seconds;
    
    double res = (degrees + (minutes/a) + (seconds/b));
    cout<<res;
    return 0;
}
