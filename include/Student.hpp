#pragma once
#include "../include/Person.hpp"
#include <vector>

class Student : public Person {
public:
    Student(const std::string name,
        const std::string lastName,
        const unsigned long int pesel,
        const Gender gender,
        const std::string address,
        const unsigned long int index);

    Student(std::vector<std::string> data);
    unsigned long int getIndex() const;
    std::string getPersonDetails() const override;

private:
    unsigned long int index_;
};
