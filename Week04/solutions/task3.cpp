// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int counter = 0;
    for(int i = 100; i < 1000; ++i)
    {
        bool cond1 = i % 10 != i/ 100;
        bool cond2 = (i % 100) / 10 != i / 100;
        bool cond3 = i % 10 != ((i % 100) / 10 );
        if( cond1 && cond2 && cond3)
        {
            counter ++;
        }
    }
    cout<< "Counter: " << counter;
    return 0;
}
