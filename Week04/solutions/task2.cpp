// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n = 0;
    cout << "N=";
    cin >> n;

    int sum = 0;

    for( int i = 10; i <= n; i++)
    {
        sum += (i/10 + i %10);
    }
    cout<< "Sum  =" << sum;
    return 0;
}
