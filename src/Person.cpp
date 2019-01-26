#include "../include/Person.hpp"
 
 using namespace std;
 
 Person::Person(const string name,
                const string lastName,
                const int pesel,
                const Gender gender,
                const string address)
     : name_(name)
     , lastName_(lastName)
     , pesel_(pesel)
     , gender_(gender)
     , address_(address)
     {}
 
 string Person::getName() const
 {
     return name_;
 }
 
 string Person::getLastName() const
 {
     return lastName_;
 }
 
 int Person::getPesel() const
 {
     return pesel_;
 }
 
 Gender Person::getGender() const
 {
     return gender_;
 }
 
 string Person::getAddress() const
 {
     return address_;
 }
 
 void Person::setAddress(const string newAddress)
 {
     address_ = newAddress;
 }
