#include <iostream>


using namespace std;

int main()
{
    int size;
    cin >> size;
    int chest , back , biceps ;
    chest = back = biceps = 0;
    for(int i = 1; i<= size;i++)
    {
        int a ;
        cin >> a;
        if (i % 3 == 1)
            chest += a;
        else if (i % 3 == 2)
        {
            biceps+= a;
        }
        else
        {
            back += a;
        }
    }
    if (back > biceps && back > chest)
    {
        cout << "back" << endl;
    }
    else if (biceps > back && biceps > chest)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "chest" << endl;
    }
    // cout << 0 % 3 << endl;
}