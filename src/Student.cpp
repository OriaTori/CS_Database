#include "../include/Student.hpp"
#include <iomanip>
#include <sstream>

Student::Student(const std::string name,
    const std::string lastName,
    const unsigned long int pesel,
    const Gender gender,
    const std::string address,
    const unsigned long int index)
    : Person(name, lastName, pesel, gender, address)
    , index_(index)
{
}

unsigned long int Student::getIndex() const
{
    return index_;
}

std::string Student::getPersonDetails() const
{
    std::stringstream ss;
    ss << Person::getPersonDetails();
    ss << std::setw(15) << "INDEX: " << std::to_string(index_) << "\n";
    return ss.str();
}
