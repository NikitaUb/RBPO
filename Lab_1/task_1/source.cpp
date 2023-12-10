#include <iostream>
#include <sstream>
using namespace std;

unsigned short height;

unsigned short ReadPersonAge()
{
    cout << "Введите возраст: ";
    unsigned short age = 0;
    cin >> age;
    return age;
}

string ReadPersonName()
{
    cout << "Введите Имя: ";
    string name;
    cin >> name;
    return name;
}

unsigned short ReadPersonHeight()
{
    cout << "Введите рост: ";
    cin >> height;
    return height;
}

void ReadPersonWeight(unsigned short& weight)
{
    cout << "Введите вес: ";
    cin >> weight;
}

void ReadPersonSalary(double* salary)
{
    cout << "Введите зарплату: ";
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
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << *age << endl;
    cout << "Рост: " << height << endl;
    cout << "Вес: " << weight << endl;
    cout << "Зарплата: " << salary << endl;
}

#ifndef DO_NOT_DEFINE_MAIN
int main()
{
    setlocale(LC_ALL, "ru");
    // Вариант 1
    string name;
    unsigned short age = 0;
    double salary = 0;
    ReadPersonData(name, age, salary);
    WritePersonData(name, &age, "172", "73", to_string(salary));

    // Вариант 2
    unsigned short height = 172;
    unsigned short weight;
    ReadPersonData(name, age, height, weight);
    WritePersonData(name, &age, to_string(height), to_string(weight), to_string(salary));

    return 0;
}
#endif