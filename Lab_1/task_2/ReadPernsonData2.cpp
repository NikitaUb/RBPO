#include"Zag.h"
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
    cout << "------N2------" << endl;
    name = ReadPersonName();
    age = ReadPersonAge();
    height = ReadPersonHeight();
    ReadPersonWeight(weight);

}