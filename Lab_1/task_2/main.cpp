#include"Zag.h"

int main()
{
    // Вариант 1
    string name;
    unsigned short age = 0;
    double salary = 0.0;
    ReadPersonData(name, age, salary);
    WritePersonData(name, &age, "?", "?", to_string(salary));

    // Вариант 2
    unsigned short height = 0;
    unsigned short weight;
    ReadPersonData(name, age, height, weight);
    WritePersonData(name, &age, to_string(height), to_string(weight), to_string(0));

    return 0;
}