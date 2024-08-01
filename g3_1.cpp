//запрашивает рост в дюймах и преобразует их в футы и дюймы 
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    const double k=12.0;
    
    double rost;
    int fut, dum;
    
    cout<<"Rost v dum:_";
    cin>>rost;
    
    fut=int(rost/k);
    dum = int(rost-fut*k);
    
    cout<<fut<<' '<<dum<<endl;
    
    return 0;
}
