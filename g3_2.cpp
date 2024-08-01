//рассчет коэф bmi
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    const double a = 12.0;
    const double r = 0.0254;
    const double m = 2.2;

    int feet, inches;
    double total;
    double funt;
    double bmi;

    cout<<"feet: ";
    cin>>feet;
    
    cout<<"inches: ";
    cin>>inches;
    
    cout<<"funt: ";
    cin>>funt;

    total=(feet*a)+inches;
    total=total*r;

    funt = funt/m;

    bmi = (funt/(total*total));

    cout<<"BMI = "<<bmi<<endl;
    return 0;
}
