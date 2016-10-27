// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int number;
    int sum = 0 ;
    int counter = 0;
    while (counter < 5)
    {
        cout<< "Enter Number";
        cin>> number;
        
        if( number >= 10  && number <= 5555)
        {
            counter++;
            sum += number; //sum = sum + number 
        }
        cout << "Counter:" << counter;
    }
    cout << "Sum = "<< sum;
    //cout<< sum;

    return 0;
}
