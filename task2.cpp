#include <iostream>
#include <fstream> /* include f,if,of stream */
#include <string>

using namespace std;
int main()
{
    // task2
    ofstream x("fruit.txt");
    x << "apple" << endl;
    x << "orange" << endl;
    x << "banaana" << endl;
    x.close();

    ifstream y("fruit.txt");
    string m;
    while (getline(y, m))
    {
        cout << m << endl;
    }
    y.close();

    fstream res("fruit.txt", ios::out | ios::app);
    res << "fresh fruit";
    res.close();
}