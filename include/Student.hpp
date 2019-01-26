#pragma once                                                                                                        
#include "../include/Person.hpp"                                                                                    
                                                                                                                       
using namespace std;                                                                                                
                                                                                                                       
class Student : public Person
{                                                                                     
    public:                                                                                                         
        Student(const string name,                                                                                  
                const string lastName,                                                                              
                const int pesel,                                                                                    
                const Gender gender,                                                                                
                const string address,                                                                               
                const int index);                                                                                   
                                                                                                                       
        int getIndex() const;                                                                                       
                                                                                                                       
    private:                                                                                                        
        int index_;                                                                                                 
}; 
