// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int number ;
    do
    {
        cin>> number;
        
    }while(number < 10 || number > 200);

    for( int i = number ; i >= 10; i--)
    {
        if( i % 7 == 0)
        {
            cout<< i << "    ";
        }
    }
    return 0;
}
