// Checking all the stl commands of hashmaps
#include <iostream>
#include <unordered_map>

using namespace std;
int main()
{
    // creation
    unordered_map<string, int> m;

    // inserting
    pair<string, int> p = make_pair("Scorpio", 9);
    m.insert(p);

    // 2nd way
    pair<string, int> p2("Alto", 3);
    m.insert(p2);

    // 3rd way - best one
    m["Fortuner"] = 10;

    // accessing
    cout << m.at("Scorpio") << endl;
    cout << m["Fortuner"] << endl;
    cout << m.at("Alto") << endl;

    // searching -> If present 1 or else 0
    cout << m.count("Alto") << endl;
    if (m.find("Fortuner") != m.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    cout << m.size() << endl;
    cout << m["hummer"] << endl;
    cout << m.size() << endl;

    // iterating
    cout << "Printing all entries" << endl;
    for (auto i : m)
    {
        cout << i.first << " ";
        cout << i.second << endl;
    }
}
