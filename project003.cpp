// using arrays
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter NO. of digits you would like to enter";
    cin >> n;
    
    int array[n];
    cout<<"Please enter the Digits:";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "You have entered:" <<array[i] << " ";
    }

    return 0;
}