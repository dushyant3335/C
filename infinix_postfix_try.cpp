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

void inf_post(string str)
{
    string result;
    stack<char> stk;
    for (int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if (str[i] >= 'a' && str[i] <= 'z')
            result += c;
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            while (!stk.empty() && str[i] <= precendence(stk.top()))
            {
                result += stk.top();
                stk.pop();
            }
        }
        else if (str[i] == '(')
        {
            stk.push('(');
        }
        else if(str[i]==')')
        {
            while(stk.top()!='(')
            {
                result+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        while(!stk.empty())
        {
            result+=stk.top();
            stk.pop();
        }
    }
}

int main()
{
    string s = "a+b+c(d+e*a)*v";
    inf_post(s);
    return 0;
}