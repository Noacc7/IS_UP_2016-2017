#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    do
    {
        cout << "N:";
        cin >> N;
    }while(N<10 || N > 100);

    int sum = 0;

    for( int i = 1; i <= N ; ++i)
    {
        if( i % 2  == 0)
        {
            sum += i;
        }

    }

    cout<< "Sum = " << sum;
    return 0;
}
