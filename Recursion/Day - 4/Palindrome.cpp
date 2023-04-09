#include <iostream>
using namespace std;
bool checkPalindrome(string str, int i, int j)
{
    // bc
    if (i > j) // It only gets pass i > j when i reaches to the end
        return true;

    if (str[i] != str[j])
        return false;
    else
        return checkPalindrome(str, i + 1, j - 1);
}
int main()
{
    string name = "abcba";
    cout << endl;
    bool isPlaindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPlaindrome)
        cout << "It's a Palindrome" << endl;
    else
        cout << "It's not a palindrome" << endl;
}