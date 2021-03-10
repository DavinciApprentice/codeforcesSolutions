#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    int i , j;
    i = 0;
    j = 0;
    for(int i = 0; i < b.size();i++)
    {
        if (b[i] == a[j])
        {
            j++;
        }
    }
    cout << j + 1<< endl;
}
