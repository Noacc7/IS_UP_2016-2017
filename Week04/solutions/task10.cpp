#include <iostream>

using namespace std;

int main()
{
    int b = 0 ;
    do
    {
        cout<< "b:";
        cin >> b;

    }while(b < 3 || b > 13);
    char c;
    cout << "Enter your character:";
    cin >> c;

    for(int i = 0; i < b; ++i)
    {
        for( int j = 0 ; j < b ; ++j)
        {
            if(j == 0 || j == b -1 || i == 0 || i == b - 1)
            {
                cout << '*';
            } else
            {
                cout << c;
            }

        }
        cout << endl;
    }

    return 0;
}
