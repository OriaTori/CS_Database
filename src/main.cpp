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
    db.addPerson(ben);
    db.addPerson(john);
    db.showBase();
    db.sortByName();
    db.sortByPesel();
    std::cout<<" \t---\n";
    db.showBase();
    db.saveToFile("base.txt");
    std::cout << "\t After loading from file: \t \n";
    db.loadFromFile("base.txt");
    db.showBase();
    delete john;
    delete ben;
    return 0;
}
