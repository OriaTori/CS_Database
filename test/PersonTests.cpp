#include "../include/Person.hpp"
#include <gtest/gtest.h>

struct PersonTests : public ::testing::Test
{
    PersonTests(): person("John",
                          "Smith",
                          123456789,
                          Gender::Male,
                          "University street 4, Nowhere"){}
    Person person;
};

TEST_F(PersonTests, checkPersonGetNameMethod)
{
    ASSERT_EQ("John", PersonTests::person.getName());
}

TEST_F(PersonTests, checkPersonGetLastNameMethod)
{
    ASSERT_EQ("Smith", person.getLastName());
}

TEST_F(PersonTests, checkPersonGetPeselMethod)
{
    ASSERT_EQ(123456789, person.getPesel());
}

TEST_F(PersonTests, checkPersonGetGenderMethod)
{
    ASSERT_EQ(Gender::Male, person.getGender());
}

TEST_F(PersonTests, checkPersonGetAddressMethod)
{
    ASSERT_EQ("University street 4, Nowhere", person.getAddress());
}

TEST_F(PersonTests, checkPersonSetAddressMethod)
{
    std::string currentAddress = person.getAddress();
    person.setAddress("Bestway street, Somewhere");

    ASSERT_NE(currentAddress, person.getAddress());
    ASSERT_EQ("Bestway street, Somewhere",person.getAddress());
}

TEST_F(PersonTests, checkPersonGetPersonDetailsMethod)
{
    std::string comperData = "                John;               Smith;   123456789;M;  University street 4, Nowhere;";
    ASSERT_EQ(comperData, person.getPersonDetails());
}

TEST_F(PersonTests, checkPersonGetSalaryMethod)
{
    ASSERT_EQ(0, person.getSalary());
}

