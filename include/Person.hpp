  #pragma once
  #include <iostream>
  #include <string>
 
  using namespace std;
 
  enum Gender : const char
  {
      Male = 'M',
      Female = 'F'
  };
 
  class Person
  {
  public:
      Person() = delete;
      Person(const string name,
             const string lastName,
             const int pesel,
             const Gender gender,
             const string address);
      virtual ~Person() = default;
      string getName() const;
      string getLastName() const;
      int getPesel() const;
      Gender getGender() const;
      string getAddress() const;
      void setAddress(const string newAddress);
      string getPersonDetails() const;
 
private:
      string name_;
      string lastName_;
      int pesel_;
      Gender gender_;
      string address_;
  };
