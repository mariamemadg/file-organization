#include <iostream>
#include <fstream> // include f,if,of stream

using namespace std;
int main()
{
        ofstream file("students.txt", ios::app);
    char name[20];
    int id;
    float grade;
    char delim='$';
    char ch='y';

    while (ch=='y')
    {
        cout<<"enter student name: ";
        cin.getline(name, 20);
        cout<< "enter student id: ";
        cin>> id;
        cout<<"enter student grade: ";
        cin >>grade;
        file <<name<<", "<<id <<", " << grade <<" " <<delim<< endl;

        cout<<"add another student?: ";
        cin >> ch;
        cin.ignore();
    }

    file.close();

}