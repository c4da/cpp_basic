#include <iostream>
#include <cmath>
using namespace std;


int bin2dec(int n)
{
    int m, i, sum_;
    i = 0;
    sum_ = 0;
    while (m>0)
    {
        cout << n << endl;
        m = n%10;
        n = n/10;
        sum_ = sum_ + m*pow(2,i);
        ++i;
    }
    return sum_;
}


int main()
{
    int m;
    m = bin2dec(101);
    cout << "results:" << endl;
    cout << m << endl;
    return 0;
    
}
