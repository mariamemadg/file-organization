 #include <iostream>
#include <fstream> /* include f,if,of stream */


using namespace std;
int main()
{
 
 int grade ,delGrade;
    // to create the file and write five grades
    ofstream out("grades.txt");
    if (out.fail()) {
        cout << "failed to open grades.txt" << endl;
    }
     else {
        int g;
        cout << "enter 5 grades: " << endl;
        for (int i = 0; i < 5; i++) {
            cin >> g;
            out << g << endl;
        }
        out.close();
    }
    // to read and print the grades
    ifstream in("grades.txt");
    if (in.fail()) {
        cout << "Unable to open grades.txt" << endl;
    }
    else {
    cout << "grades in file:" << endl;
    while (in >> grade) {
        cout << grade << endl;
    }
    in.close();
    }
    // to ask user for a grade to delete, copy others to temp.txt
    cout << "Enter grade to delete: ";
    cin >> delGrade;

    ifstream inFile("grades.txt");
    ofstream tempFile("temp.txt");
    while (inFile >> grade)
    {
        if(grade !=delGrade)
        {
            tempFile<<grade << endl;
        }
    }
    inFile.close();
    tempFile.close();
    //that replace original file to a new one and show message
    if (remove("grades.txt") == 0 && rename("temp.txt", "grades.txt") == 0) {
        cout << "Deleted and updated successfully!" << endl;
    } else {
        cout << "error updating file." << endl;
    }
}