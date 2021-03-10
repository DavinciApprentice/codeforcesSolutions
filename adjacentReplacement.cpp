#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    long long size;
    cin >> size;
    for(int i = 0; i < size;i++)
    {
        long long a;
        cin >> a;
        if (a % 2 == 0) 
            a -= 1;
        cout << a << ' ';
    }
    cout << endl;
}