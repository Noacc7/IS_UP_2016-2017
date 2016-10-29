#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    do
    {
        cout << "N:";
        cin >> N;
    }while(N<3 || N > 10);

    int sum = 0;
    int max = -1;
    int number;
    for( int i = 1; i <= N ; ++i)
    {
        cout<< "Enter number:";
        cin >> number;
        if(number > max)
        {
            max = number;
        }
        sum += number;
    }

    cout<< "Sum = " << sum;
    cout << "Max = " << max;
    return 0;
}
