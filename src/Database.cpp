#include "../include/Database.hpp"

NotFound::NotFound(const std::string& message)
    : std::out_of_range(message)
{
}

void Database::addPerson(Person* person)
{
    peopleBase_.emplace_back(person);
}

void Database::showBase() const
{
    std::cout << "\t Database: \n";
    for (const auto& person : peopleBase_) {
        std::cout << person->getPersonDetails();
    }
}

void Database::saveToFile(std::string filename) const
{
}

void Database::loadFromFile(std::string filename)
{
}
