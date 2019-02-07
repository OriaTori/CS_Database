#pragma once
#include "../include/Person.hpp"
#include "../include/Student.hpp"
#include "../include/Employee.hpp"
#include <stdexcept>
#include <string>
#include <vector>

using PeopleBase = std::vector<Person*>;

class NotFound : public std::out_of_range {
public:
    NotFound(const std::string& message);
};

class Database {
public:
    void addPerson(Person* person);
    void showBase() const;
    void sortByName();
    void sortByPesel();
    void sortBySalary();
    Person* findByPesel(unsigned long int index);
    void saveToFile(std::string filename) const;
    void loadFromFile(std::string filename);
    std::vector<std::string> changeString(std::string line);
    void createPersonIn(std::vector<std::string> data);
    void modifyAddress(const int pesel, const std::string newAddress);

private:
    PeopleBase peopleBase_;
};
