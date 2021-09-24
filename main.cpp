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

void changeLuck(vector<Person> &people,int index1, int index2){
    int luckTemp1 = people[index1-1].getLuck(), luckTemp2 = people[index2-1].getLuck();
    people[index1-1].setLuck(luckTemp2);
    people[index2-1].setLuck(luckTemp1);
    cout << "You have changed luck of: " << people[index1-1].getName() << " and " << people[index2-1].getName() << endl;
    cout << "Now check the list whether changes have been made" << endl << "===================" << endl;
}

int main() {
    srand(time(NULL));
    Person person;
    vector<Person>people(5);
    setPeople(people);
    listPeople(people);
    findLuckiest(people);
    cout << "Now you can swap `Luck` of 2 Person, please choose from the list below" << endl;
    listPeople(people);
    int index1, index2;
    cout << "Person 1 serial number: ";
    cin >> index1;
    cout << "Person 2 serial number: ";
    cin >> index2;
    changeLuck(people,index1,index2);
    listPeople(people);
    Person *man = new Person();
    delete man;
    return 0;
}
