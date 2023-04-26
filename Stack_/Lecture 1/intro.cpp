#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // creating of stack
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // pop
    st.pop();

    // checking top element
    cout << "Element on top is: " << st.top() << endl;

    // size
    cout << "Size of stack is: " << st.size() << endl;

    if (st.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}