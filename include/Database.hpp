#pragma once
#include <vector>
#include "../include/Person.hpp"
#include <stdexcept>
#include <string>

using PeopleBase = std::vector<Person *>;

class NotFound : public std::out_of_range
{
    public:
        NotFound(const std::string& message);
};

class Database
{
    public:
        void saveToFile(std::string filename) const;
        void loadFromFile(std::string filename);
    private:
        PeopleBase peopleBase_;

};
