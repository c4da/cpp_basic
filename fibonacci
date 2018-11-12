#include <iostream>
#include <string>
#include <vector>
#include <typeinfo> 
using namespace std;

typedef vector <int> V;

V fibo(int n)
{
    
    V x={};
    int num, i;
    cout << n << endl;
    for (i = 0; i < 3; i++)
        cout << i << endl;
        if (i == 0)
            {
            cout << "i==0: " << endl;
            x.push_back(0);
            cout << x[0] << endl;
            }
        if (i == 1)
            {
            cout << "i==1: " << endl;
            x.push_back(1);
            cout << x[1] << endl;
            }
        if (i > 1)
            {
            cout << "i>1: " << endl;
            num = x[i-2]+x[i-1];
            
            cout << num << endl;
            x.push_back(num);
            }
    return x;
}


int main()
{
    auto m = fibo(4);
    cout << "results:" << endl;
    cout << m[5] << endl;
    //x.push_back(5);
    cout << typeid(m[4]).name() << endl;
    //cout << x << endl;
    return 0;
    
}
