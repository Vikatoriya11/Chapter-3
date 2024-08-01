//переводит литр на 100 км в мили на галлон
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    double l_k_100;
    cin>>l_k_100;
    
    double res = 62.14 / (l_k_100 / 3.875);
    cout<<res<<endl;
    
    return 0;
}
