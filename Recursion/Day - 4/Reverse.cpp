#include <iostream>
using namespace std;
void reverse(string &str, int i, int j) // --> &str is pass by reference and it doesn't creates a copy
{
    cout << "call received for " << str << endl;
    // bc
    if (i > j)
        return; // -> return;  wapas aa jana

    // processing
    swap(str[i++], str[j--]);

    // rc
    reverse(str, i, j);
}
int main()
{
    string name = "tejas";
    reverse(name, 0, name.length() - 1);
    cout << name << endl;
}