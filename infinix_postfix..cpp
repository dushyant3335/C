#include <iostream>
#include <stack>
using namespace std;

int precendence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
void infinix_postfix(string s)
{
    stack<char> stk;
    string result;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (s[i] >= 'a' && s[i] <= 'z')
            result += c;
        else if ((s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*'))
        {
            while (!stk.empty() && (s[i]) <= precendence(stk.top()))
            {
                result += stk.top();
                stk.pop();
            }
            stk.push(c);
        }
        else if (s[i] == '(')
            stk.push('(');
        else if (s[i] == ')')
        {
            while (stk.top() != '(')
            {
                result += stk.top();
                stk.pop();
            }
            stk.pop();
        }
    }
    while (!stk.empty())
    {
        result += stk.top();
        stk.pop();
    }
    cout << result;
}

int main()
{
    string str = "a+b+c";
    infinix_postfix(str);
    return 0;
}