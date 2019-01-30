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

Student::Student(std::vector<std::string> data)
    : Person(data[0],
            data[1],
            std::stoul(data[2]),
            (data[3]=="M")?Gender::Male: Gender::Female,
            data[4])
    , index_(std::stoul((data[5].substr(data[5].find(":")+1))))
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
    ss << std::setw(15) << "INDEX: " << std::to_string(index_) << ";\n";
    return ss.str();
}
