//количество литров на 100 км
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    double km, litr;

    cout<<"km: ";
    cin>>km;

    cout<<"litr: ";
    cin>>litr;

    double res = (litr/km)*100;
    cout<<res<<endl;

    return 0;
}
