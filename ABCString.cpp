#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--)
    {
        string str;
        cin >> str;
        int mod1 = 0;
        int mod2 = 0;
        char A = str[0];
        str[0] = '(';
        for(int i = 1; i < str.size();i++)
        {
            if (str[i] != A)
            {
                if (mod1 == 0)
                {
                    while(str[i] == str[i+1])
                    {
                        str[i] = ')';
                        str[i+1] =  ')';
                        i++;
                    }
                    mod1 = 1;
                }
                else
                {
                    while(str[i] == str[i+1])
                    {
                        str[i] = '(';
                        str[i + 1] = '(';
                    }
                    mod1 = 0;
                }
            }
            else
            {
                str[i] == '(';
            }
        }
        cout << str << endl;
    }
}