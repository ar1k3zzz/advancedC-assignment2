#include "../Header Files/Person.h"

Person::Person() : name("Arystan"), age(19), luck(100) {}
Person::Person(const std::string &name, int age, double luck) : name(name), age(age), luck(luck) {}

//Functions

//Getters & Setters

const std::string &Person::getName() const {
    return name;
}

void Person::setName(const std::string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

double Person::getLuck() const {
    return luck;
}

void Person::setLuck(double luck) {
    Person::luck = luck;
}
