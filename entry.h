#include <iostream>

using namespace std;

int validInput()
{
    int x;
    cin >> x;
    while(std::cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Bad entry.  Enter a NUMBER: ";
        cin >> x;
    }
    return x;
}