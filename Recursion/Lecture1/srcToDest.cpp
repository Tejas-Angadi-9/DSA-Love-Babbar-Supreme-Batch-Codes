#include <iostream>
using namespace std;

void src(int source, int dest)
{
    // bc
    if (source == dest)
    {
        cout << "Reached destination" << endl;
        return;
    }

    source++;
    cout << "Moving one step ahead: " << source << endl;
    src(source, dest);
}

int main()
{
    int source = 0;
    int dest = 5;
    src(source, dest);
}