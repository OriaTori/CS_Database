#pragma once
#include "../include/Person.hpp"

class Employee : public Person {
public:
    Employee(const std::string name,
        const std::string lastName,
        const unsigned long int pesel,
        const Gender gender,
        const std::string address,
        const unsigned long int salary);

    unsigned long int getSalary() const;
    std::string getPersonDetails() const override;

private:
    unsigned long int salary_;
};
