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
    db.addPerson(john);
    db.addPerson(ben);
    db.showBase();
    delete john;
    delete ben;
    return 0;
}
