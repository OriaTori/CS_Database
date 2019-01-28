#pragma once
#include <iostream>
#include <string>

enum Gender : const char {
    Male = 'M',
    Female = 'F'
};

class Person {
public:
    Person() = delete;
    Person(const std::string name,
        const std::string lastName,
        const unsigned long int pesel,
        const Gender gender,
        const std::string address);
    virtual ~Person() = default;
    std::string getName() const;
    std::string getLastName() const;
    unsigned long int getPesel() const;
    Gender getGender() const;
    std::string getAddress() const;
    void setAddress(const std::string newAddress);
    virtual std::string getPersonDetails() const;

private:
    std::string name_;
    std::string lastName_;
    unsigned long int pesel_;
    Gender gender_;
    std::string address_;
};
