#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sum = 0;
    for(double n = 1; n < 11; n++)
    {
        cout << pow(n, -4./3.) << endl;
        sum += pow(n, -4./3.);
    }
    cout << sum;
    return 0;
}
