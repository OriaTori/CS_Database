#include "../include/Employee.hpp"
#include <iomanip>
#include <sstream>

Employee::Employee(const std::string name,
    const std::string lastName,
    const unsigned long int pesel,
    const Gender gender,
    const std::string address,
    const unsigned long int salary)
    : Person(name, lastName, pesel, gender, address)
    , salary_(salary)
{
}

unsigned long int Employee::getSalary() const
{
    return salary_;
}

std::string Employee::getPersonDetails() const
{
    std::stringstream ss;
    ss << Person::getPersonDetails();
    ss << std::setw(15) << "SALARY: " << std::to_string(salary_)<< "\n";
    return ss.str();
}
