#include "../include/Database.hpp"
#include <algorithm>
#include <fstream>

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
void Database::sortByName()
{
    std::sort(peopleBase_.begin(), peopleBase_.end(),
            [](Person* lh, Person* rh){
            return lh->getLastName() < rh->getLastName();
            });
}

void Database::sortByPesel()
 {
     std::sort(peopleBase_.begin(), peopleBase_.end(),
             [](Person* lh, Person* rh){
             return lh->getPesel() < rh->getPesel();
             });
 }
void Database::saveToFile(std::string filename) const
{
    std::ofstream file(filename, std::ios::out);
    if(file.is_open())
    {
        for(auto it : peopleBase_)
        {
            file << it->getPersonDetails();
        }
    }
    file.close();
}

void Database::loadFromFile(std::string filename)
{
}
