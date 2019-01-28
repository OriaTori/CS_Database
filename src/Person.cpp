#include "../include/Person.hpp"
#include <iomanip>
#include <sstream>

 Person::Person(const std::string name,
                const std::string lastName,
                const unsigned long int pesel,
                const Gender gender,
                const std::string address)
     : name_(name)
     , lastName_(lastName)
     , pesel_(pesel)
     , gender_(gender)
     , address_(address)
     {}
 
std::string Person::getName() const
 {
     return name_;
 }
 
std::string Person::getLastName() const
 {
     return lastName_;
 }
 
 unsigned long int Person::getPesel() const
 {
     return pesel_;
 }
 
 Gender Person::getGender() const
 {
     return gender_;
 }
 
std::string Person::getAddress() const
 {
     return address_;
 }
 
 void Person::setAddress(const std::string newAddress)
 {
     address_ = newAddress;
 }

std::string Person::getPersonDetails() const
{
    std::stringstream ss;
    ss << std::setw(20) << name_ ;
    ss << std::setw(20) << lastName_ ;
    ss << std::setw(12) << std::to_string(pesel_);
    ss << std::setw(1)  << static_cast<char>(gender_);
    ss << std::setw(30) << address_ ;
    return ss.str();
}
