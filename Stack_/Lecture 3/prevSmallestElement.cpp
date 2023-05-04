// we need to find the prev smallest element

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    vector<int> input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    stack<int> s;
    s.push(-1); // we know as the right most element doesn't have any element next to it

    // creating ans vector to store the ans
    vector<int> ans(input.size());

    // Traversing from left to right 
    for (int i = 0; i< input.size(); i++)
    {
        int curr = input[i];

        // checking for the element from the stack
        while (s.top() >= curr)
        {
            // ke popping
            s.pop();
        }

        // We know this is our smallest element when coming out of while loop
        ans[i] = s.top();

        // push kardo curr element ko stack me
        s.push(curr);
    }

    cout << "Printing" << endl;
    for (int i = 0; i < input.size(); i++)
    {
        cout << ans[i] << " ";
    }
}