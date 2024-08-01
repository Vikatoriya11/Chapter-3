//соотношение численности населения страны и всего мира
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    long long population, country;
    
    cout<<"population: ";
    cin>>population;
    
    cout<<"country: ";
    cin>>country;
    
    double percentage = (double)country / population * 100;
    cout<<percentage<<"%"<<endl;
    
    return 0;
}
