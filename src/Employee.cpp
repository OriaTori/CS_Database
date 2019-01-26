#include "../include/Employee.hpp"

using namespace std;

Employee::Employee(const string name,
                 const string lastName,
                 const int pesel,
                 const Gender gender,
                 const string address,
                 const int salary)
    : Person(name, lastName, pesel, gender, address)
    , salary_(salary)
    {}

int Employee::getSalary() const
{
    return salary_;
}
