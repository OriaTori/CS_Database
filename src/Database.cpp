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

void Database::sortBySalary()
{
    std::sort(peopleBase_.begin(), peopleBase_.end(),
            [](Person* lh, Person* rh){
            return lh->getSalary() < rh->getSalary();
            });
}

void Database::saveToFile(std::string filename) const
{
    std::ofstream file(filename, std::ios::out | std::ios_base::app);
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
    std::ifstream file(filename, std::ios_base::in);
   // file.seekg(0);
    if(file.is_open())
    {
        std::string line;
        while(!file.eof())
        {
            std::getline(file,line);
            std::vector<std::string> words = changeString(line);
            createPersonIn(words);
        }    
    }
    file.close();

}

std::vector<std::string> Database::changeString(std::string line)
{
    std::string::size_type pos;
    std::vector<std::string> words;
    while(line.size() != 0)
    { 
        pos = line.find(";");
        words.emplace_back(line.substr(0,pos));
        line.erase(0,pos+1);
    }
    return words;
}

void Database::createPersonIn(std::vector<std::string> data)
{
    if(!data.empty())
    {
        if(data.back().find("INDEX:") != std::string::npos)
        {
            Person* person = new Student(data);
            addPerson(person);
        }
        else
        {
            Person* person = new Employee(data);
            addPerson(person);
        }
    }
}

Person* Database::findByPesel( unsigned long int index)
{
	auto found = std::find_if(peopleBase_.begin(), peopleBase_.end(), 
		[index](auto person){return person->getPesel()==index;});
	if (found != peopleBase_.end())
	{
		return *found;
	}
	else
	{
		return nullptr;
	}
}
