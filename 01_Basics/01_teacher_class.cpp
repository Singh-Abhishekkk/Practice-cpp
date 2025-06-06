#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // Setter
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Rajiv";
    t1.subject = "C++";
    t1.dept = "Computer Science";

    cout << "Name: " << t1.name << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.dept << endl;

    t1.setSalary(65000);
    cout << "Salary: " << t1.getSalary() << endl;

    return 0;
}
