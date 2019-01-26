  #pragma once
  #include <iostream>
  #include <string>
 
  using namespace std;
 
  enum Gender
  {
      Male,
      Female
  };
 
  class Person
  {
  public:
      Person();
      Person(const string name,
             const string lastName,
             const int pesel,
             const Gender gender,
             const string address);
 
      string getName() const;
      string getLastName() const;
      int getPesel() const;
      Gender getGender() const;
      string getAddres() const;
      void setAddress(const string newAddress);
 
  protected:
      string name_;
      string lastName_;
      int pesel_;
      Gender gender_;
      string address_;
  };
