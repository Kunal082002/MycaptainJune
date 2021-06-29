// voting elegibility checker
#include <iostream>
using namespace std;
 
int main()
{
     string name;
    {
        cout << "\nEnter Your Name:";
        cin >> name;
        cout << "\nHello " << name << endl;
    }
    int age;
    cout << "Please enter your Age :";
    cin >> age;
    if (age >= 18)
    {
        cout << "\n Congratulations " << name << endl;
        cout << "You are eligible to Vote";
    }
    else
    {
        cout << "\n Sorry "<< name << endl;
        cout << "You are not eligible to vote";
    }
  

}
