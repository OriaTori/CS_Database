#pragma once
#include "../include/Person.hpp"
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
    void saveToFile(std::string filename) const;
    void loadFromFile(std::string filename);

private:
    PeopleBase peopleBase_;
};
