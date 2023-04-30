// To check whether the given letter is present in a string or not

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool check(char name[], char key, int i)
{
    // bc
    if (name[i] == '\0')
    {
        return false;
    }

    // 1st case
    if (name[i] == key)
    {
        return true;
    }

    // rc
    bool ans = check(name, key, i + 1);
    return ans;
}

int main()
{
    char name[] = "Tejas Angadi";
    char key = 'i';
    int i = 0;

    int flag = check(name, key, i);
    if (flag)
        cout << "Letter: " << key << " present in the string" << endl;
    else
        cout << "Letter: " << key << " absent in the string" << endl;
}