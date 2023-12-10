#include"Zag.h"

void ReadPersonData(string& name, unsigned short& age, double& salary)
{
    cout << "------N1------" << endl;
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

