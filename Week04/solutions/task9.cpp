#include <iostream>

using namespace std;

int main()
{
    int firstNumber;
    int secondPartOfNumber;
    for( int i = 100; i <= 999 ; ++i)
    {
        firstNumber = i / 100;
        secondPartOfNumber = i % 100;
        if(firstNumber*firstNumber == secondPartOfNumber)
        {
            cout<< i << "   ";
        }
    }

    return 0;
}
