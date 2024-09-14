#include <iostream>
using namespace std;

int main()
{
    string Name[100];
    int Age[100];
    int Salary[100];
    char Gender[100];
    int choice1, EmployeeNumber = 0;

    while (1)
    {
        cout << "\nEnter Your Choises:\n"
             << "1) Add new employee\n"
             << "2) Print all employees\n"
             << "3) Delete by age\n"
             << "4) Update salary by name\n";

        cin >> choice1;
        if (choice1 == 1)
        {
            string name;
            int salary, age;
            char gender;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter Age : ";
            cin >> age;
            cout << "Enter Salary : ";
            cin >> salary;
            cout << "Enter Gender : ";
            cin >> gender;

            Name[EmployeeNumber] = name;
            Age[EmployeeNumber] = age;
            Salary[EmployeeNumber] = salary;
            Gender[EmployeeNumber] = gender;
            EmployeeNumber++;
        }
        else if (choice1 == 2)
        {
            for (int i = 0; i < EmployeeNumber; i++)
            {
                cout << Name[i] << " " << Age[i] << " " << Salary[i] << " " << Gender[i] << endl;
            }
        }
        else if (choice1 == 3)
        {
            int Startage, Endage;
            cout << "Enter Starting Age : ";
            cin >> Startage;
            cout << "Enter Ending Age : ";
            cin >> Endage;

            for (int i = 0; i < EmployeeNumber; i++)
            {
                if (Startage <= Age[i] && Age[i] <= Endage)
                {
                    for (int j = i; j < EmployeeNumber; j++)
                    {
                        Name[j] = Name[j + 1];
                        Age[j] = Age[j + 1];
                        Salary[j] = Salary[j + 1];
                        Gender[j] = Gender[j + 1];
                    }
                    EmployeeNumber--;
                }
            }
        }
        else
        {
            string name;
           int salary;
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter Updated Salary : ";
            cin >> salary;

            for (int i = 0; i < EmployeeNumber; i++)
            {
                if (name == Name[i] )
                {
                    Salary[i] = salary;
                }
            }
        }
    }

    return 0;
}