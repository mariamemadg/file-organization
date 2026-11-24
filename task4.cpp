#include <iostream>
#include <fstream> // include f,if,of stream
#include <string>
#include <vector>
using namespace std;

// struct function has curly bracket and ; at end of function
struct person
{
    string name;
    int age;
};

int main()
{
    int n;
    cout << "Enter number of persons: ";
    cin >> n;

    ofstream out("persons.txt");
    for (int i = 0; i < n; i++)
    {
        person p;
        cout << "Enter name and age for person " << i + 1 << ": ";
        cin >> p.name >> p.age;
        out << p.name << " " << p.age << endl;
    }
    out.close();

    ifstream in("persons.txt");
    vector<person> people;
    person t;
    for (int i = 0; i < n; i++)
    {
        in >> t.name >> t.age;
        people.push_back(t);
    }
    in.close();
    person young = people[0];
    person old = people[0];

    for (int i = 1; i < n; i++)
    {
        person num = people[i];
        if (num.age < young.age)
        {
            young = num;
        }
        else if (num.age > old.age)
        {
            old = num;
        }
    }
    ofstream res("results.txt");
    res << "Younger person: " << young.name << " " << young.age << endl;
    res << "Older person: " << old.name << " " << old.age << endl;
    res.close();
}