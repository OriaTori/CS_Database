#pragma once
#include "../include/Person.hpp"
#include <vector>

class Employee : public Person {
public:
    Employee(const std::string name,
        const std::string lastName,
        const unsigned long int pesel,
        const Gender gender,
        const std::string address,
        const unsigned long int salary);

    Employee(std::vector<std::string>);
    unsigned long int getSalary() const override;
    std::string getPersonDetails() const override;

private:
    unsigned long int salary_;
};
