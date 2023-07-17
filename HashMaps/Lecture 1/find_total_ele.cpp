// Find the total no. of elements using map
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "Thrivanthapuram";
    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        // take each character
        char ch = s[i];
        m[ch]++;
    }

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}
