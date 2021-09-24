#ifndef ADVANCEDC_ASSIGNMENT2_PERSON_H
#define ADVANCEDC_ASSIGNMENT2_PERSON_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
public:
    Person();
    Person(const std::string &name, int age, double luck);

    //Functions

    //Getters & Setters
    const std::string &getName() const;

    void setName(const std::string &name);

    int getAge() const;

    void setAge(int age);

    double getLuck() const;

    void setLuck(double luck);

private:
    std::string name;
    int age;
    double luck;
};


#endif //ADVANCEDC_ASSIGNMENT2_PERSON_H
