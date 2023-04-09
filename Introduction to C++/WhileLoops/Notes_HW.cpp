#include <iostream>
using namespace std;
int main()
{

    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes;
    switch (100)
    {
    case 100:
        notes = amount / 100;
        cout << "notes for 100: " << notes << endl;
        amount = amount - (notes * 100);
    case 50:
        notes = amount / 50;
        cout << "notes for 50: " << notes << endl;
        amount = amount - (notes * 50);
    case 20:
        notes = amount / 20;
        cout << "notes for 20: " << notes << endl;
        amount = amount - (notes * 20);
    case 1:
        notes = amount / 1;
        cout << "notes for 1: " << notes << endl;
        amount = amount - (notes * 1);
    }
}