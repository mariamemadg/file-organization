#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() 
{
          //task7
    //وضع الأسماء الـ 4 المعطاة في السؤال داخل الملف
    ofstream out("names.txt");
    out<< "Hadeer Mahmoud" << endl;
    out<< "Youssef Ali" << endl;
    out<< "Ahmed Mostafa" << endl;
    out<< "Esraa Ebrahim" << endl;
    out.close();

    ifstream input("names.txt");
    string m;
    vector<string> data;

    while (getline(input,m)) {
        data.push_back(m);
    }
    input.close();
    // to stor the names alphabetically
    for (int i = 0; i < data.size(); i++)
    {
        for (int j= i+ 1; j <data.size(); j++)
        {
            if (data[i] > data[j])
            {
                string temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
   ofstream sortout("names.txt", ios::app);
    sortout << "\nLines sorted Successfully:\n";
    cout << "lines sorted Successfully:" << endl;

    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << endl;
        sortout << data[i] << endl;
    }
    sortout.close();
}