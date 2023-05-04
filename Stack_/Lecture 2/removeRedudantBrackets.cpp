#include <iostream>
#include <stack>
using namespace std;

bool checkRedundancy(string s)
{
    // code here
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool flag = true;
                while (!st.empty() && st.top() != '(')
                {
                    if (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/')
                    {
                        flag = false;
                    }
                    st.pop();
                }
                if (!st.empty())
                {
                    st.pop();
                }
                if (flag == true)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    string s = "(a + b) * c";
    cout << checkRedundancy(s) << endl;
}