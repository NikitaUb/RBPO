#include <iostream>
#include <sstream>
using namespace std;

unsigned short height;

unsigned short ReadPersonAge()
{
    cout << "������� �������: ";
    unsigned short age = 0;
    cin >> age;
    return age;
}

string ReadPersonName()
{
    cout << "������� ���: ";
    string name;
    cin >> name;
    return name;
}

unsigned short ReadPersonHeight()
{
    cout << "������� ����: ";
    cin >> height;
    return height;
}

void ReadPersonWeight(unsigned short& weight)
{
    cout << "������� ���: ";
    cin >> weight;
}

void ReadPersonSalary(double* salary)
{
    cout << "������� ��������: ";
    cin >> *salary;
}
void ReadPersonData(string& name, unsigned short& age, double& salary)
{
    cout << "________N1___________" << endl;
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
    cout << "____________N2_____________" << endl;
    name = ReadPersonName();
    age = ReadPersonAge();
    height = ReadPersonHeight();
    ReadPersonWeight(weight);

}

void WritePersonData(const string& name, const unsigned short* age, const string& height, const string& weight, string salary)
{
    cout << "���: " << name << endl;
    cout << "�������: " << *age << endl;
    cout << "����: " << height << endl;
    cout << "���: " << weight << endl;
    cout << "��������: " << salary << endl;
}

#ifndef DO_NOT_DEFINE_MAIN
int main()
{
    setlocale(LC_ALL, "ru");
    // ������� 1
    string name;
    unsigned short age = 0;
    double salary = 0;
    ReadPersonData(name, age, salary);
    WritePersonData(name, &age, "172", "73", to_string(salary));

    // ������� 2
    unsigned short height = 172;
    unsigned short weight;
    ReadPersonData(name, age, height, weight);
    WritePersonData(name, &age, to_string(height), to_string(weight), to_string(salary));

    return 0;
}
#endif