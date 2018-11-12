#include <iostream>
using namespace std;

int test(int n)
{
    int i = 1;
    int sum_ = 0;
    while (i<n)
    {
        //cout << i << endl;
        if (n%i == 0)
        {
            sum_ += i; 
        }
    ++i;
    }
    if (sum_ == n)
    {
    cout << n << endl;
    }
    return 0;
}


int main()
{
    
    int i = 2;
    while (i<50)
    {
        test(i);
        ++i;
    }
    
}
