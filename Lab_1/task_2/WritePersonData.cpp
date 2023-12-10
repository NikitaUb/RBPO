#include"Zag.h"
void WritePersonData(const string& name, const unsigned short* age, const string& height, const string& weight, string salary)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << *age << endl;
    cout << "Height: " << height << endl;
    cout << "Weight: " << weight << endl;
    cout << "Salary: " << salary << endl;
}