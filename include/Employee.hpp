#pragma once                                                                                                        
#include "../include/Person.hpp"                                                                                    
                                                                                                                       
using namespace std;                                                                                                
                                                                                                                       
class Employee : public Person
{                                                                                     
    public:
        Employee(const string name,
                const string lastName,                                                                              
                const int pesel,                                                                                    
                const Gender gender,                                                                                
                const string address,                                                                               
                const int salary);                                                                                   
                                                                                                                       
        int getSalary() const;                                                                                       
                                                                                                                       
    private:                                                                                                        
        int salary_;                                                                                                 
}; 
