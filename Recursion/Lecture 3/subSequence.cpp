// Find all the subsequences of the string
#include <iostream>
using namespace std;

void printSubsequences(string &str, string output, int i)
{
    // bc
    if (i >= str.length())
    {
        // print the subsequnce and return
        cout << output << endl;
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1);

    // include
    // we push the value in the output string and then move the sequence of the original string
    output.push_back(str[i]);
    printSubsequences(str, output, i + 1);
}

int main()
{
    string str = "abc";
    string output = "";

    int i = 0;
    printSubsequences(str, output, i);
}