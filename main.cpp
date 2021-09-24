#include "Header Files/Person.h"
#include <ctime>

void setPeople(vector<Person> &people){
    for(int i = 0; i < people.size(); i++){
        string name;
        int age;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        people[i].setName(name);
        people[i].setAge(age);
        people[i].setLuck(rand() % 100 + 1);
        cout << "===================" << endl;
    }
}

void listPeople(vector<Person> &people){
    for(int i = 0; i < people.size(); i++){
        cout << "[" << i+1 << "] Name: " << people[i].getName() << ", ";
        cout << "Age: " << people[i].getAge() << ", ";
        cout << "Luck: " << people[i].getLuck() << "; " << endl;
    }
    cout << "===================" << endl;
}

void findLuckiest(vector<Person> &people){
    int index = 0, max = 0;
    for(int i = 0; i < people.size(); i++){
        if(people[i].getLuck() > max){
            index = i;
            max = people[i].getLuck();
        }
    }
    cout << "Luckiest Person: " << people[index].getName() << endl << "===================" << endl;
}

int main() {
    srand(time(NULL));
    Person person;
    vector<Person>people(5);
    setPeople(people);
    listPeople(people);
    findLuckiest(people);
    return 0;
}
