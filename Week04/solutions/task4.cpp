// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int number;
    cin>> number;
    for (int i = 100 ; i < 1000 ; i++)
    {
        int sum = i %10  + (i %100) / 10 + i / 100;

        if(number == sum)
        {
            cout<< i<< " ";
        }
    }
    return 0;
}
