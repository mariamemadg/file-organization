#include <iostream>
#include <fstream> /* include f,if,of stream */
#include <string>

using namespace std;
int main()
{
    // task3
    ofstream m("welcome.txt");
    m << "hello everybody";
    m.seekp(11, ios::beg);
    m << "one ";
    m.close();
}