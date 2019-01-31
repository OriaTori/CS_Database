#include "../include/Database.hpp"
#include "../include/Student.hpp"
#include "../include/Employee.hpp"
#include <cassert>

int main()
{
    Person* john = new Student("John",
                                "Johnson",
                                12345678910,
                                Gender::Male,
                                "Somewhere City",
                                123456);
    Person* ben = new Employee("Ben",
                            "Smith",
                            10987654321,
                            Gender::Male,
                            "SomeStreet someCity",
                           5000);
    Database db;
    db.loadFromFile("base.txt");
    std::cout<<"After loading:\n";
    db.showBase();

    db.addPerson(ben);
    db.addPerson(john);
    
    std::cout<<"After adding 2 persons:\n";
    db.showBase();
    
    std::cout<<"After sort by name:\n";
    db.sortByName();
    db.showBase();
    
    std::cout<<"After sort by PESEL:\n";
    db.sortByPesel();
    db.showBase();
    
    db.saveToFile("database.txt");

    std::cout << "\t After loading from file: \t \n";
    db.loadFromFile("database.txt");
    db.showBase();
    
    std::cout<<"After sort by salary:\n ";
    db.sortBySalary();
    db.showBase();

    delete john;
    delete ben;
    return 0;
}
