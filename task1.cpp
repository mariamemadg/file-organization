#include <iostream>
#include <fstream> /* include f,if,of stream */
#include <string>

using namespace std;

int main()
{
    // task1
    int id, grade;
    string name;

    cout << "enter the full name : ";

    getline(cin, name);
    cout << "enter the id : ";
    cin >> id;
    cout << "enter the grade : ";
    cin >> grade;
    cout << name << " " << id << " " << grade;

    ofstream out("student.txt");
    out << "....student data.... \n";
    out << "student name : " << name << "\n";
    out << "student id : " << id << "\n";
    out << "student grade : " << grade << "\n";
}