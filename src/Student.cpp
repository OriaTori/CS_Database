#include "../include/Student.hpp"

using namespace std;

Student::Student(const string name,
                 const string lastName,
                 const int pesel,
                 const Gender gender,
                 const string address,
                 const int index)
    : Person(name, lastName, pesel, gender, address)
    , index_(index)
    {}

int Student::getIndex() const
{
    return index_;
}
