#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    do
    {
        cout << "N:";
        cin >> N;
    }while(N<3 || N > 102);

    int sum = 0;

    for( int i = 1; i <= N ; ++i)
    {
        sum += i;
    }

    cout<< "Sum = " << sum;
    return 0;
}
