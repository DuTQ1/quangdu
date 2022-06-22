#include <iostream>
#include <string>

int main(){
    std::string firstName, lastName, Gender;
    int age, id, number;
    std:: cout<< "First name: ";
    getline(std::cin,firstName);
    std:: cout<< "Last name: ";
    getline(std::cin,lastName);
    std:: cout<<"Age: ";
    std:: cin>> age;
    std::cin.ignore();
    std:: cout<< "Gender: ";
    getline(std::cin,Gender);
    std:: cout<< "ID: ";
    std:: cin>>id;
    std:: cout<< "Number: ";
    std:: cin>>number;
    std:: cout << ".................vv................."<<std:: endl;
    std:: cout<<"First name: "<< firstName<<std::endl;
    std:: cout<<"Last name: "<< lastName<<std::endl;
    std:: cout<<"Age: "<<age<<std::endl;
    std:: cout<< "Gender: "<<Gender<<std::endl;
    std:: cout<< "ID: "<< id<<std::endl;
    std:: cout<< "Number: "<<number<<std::endl;
return 0;
}
