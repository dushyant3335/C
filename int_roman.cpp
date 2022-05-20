#include <iostream>
using namespace std;

char *intToRoman(int A)
{
    char *c;
    c=new char();
    if (A == 0)
    {
        return c;
    }
    else
    {

        if (A >= 1000)
        {
            int thousand = A / 1000;
            for (int i = 0; i < thousand; i++)
            {
                c += 'M';
            }
            A = A - 1000 * thousand;
        }

        if (A >= 500 && A < 1000)
        {
            c += 'D';
            A = A - 500;
        }
        return intToRoman(A);
        if (A >= 100 && A < 500)
        {
            int rem = A / 100;
            for (int i = 0; i < rem; i++)
            {
                c += 'C';
            }
            A = A - 100 * rem;
        }

        if (A >= 50 && A < 100)
        {
            c += 'L';
            A = A - 50;
        }

        if (A >= 10 && A < 50)
        {
            int reminder = A / 50;
            for (int i = 0; i < reminder; i++)
            {
                c += 'X';
            }
            A = A - 10 * reminder;
        }

        if (A >= 5 && A < 10)
        {
            c += 'V';
            A = A - 5;
        }

        if (A > 1 && A < 5)
        {
            int ones = (A / 1) - 1;
            for (int i = 0; i < ones; i++)
            {
                cout << 'I';
            }
        }
        return intToRoman(A);
    }
}
int main()
{
    int n;
    cin >> n;
    string str;
    str = intToRoman(n);
    return 0;
}