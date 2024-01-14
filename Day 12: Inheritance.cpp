#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
    string grade;
    string firstName, lastName;
    int scores[10], idNumber, gradeCount;
    
    void calculate(){
        int sum = 0;
        for(int i = 0; i < gradeCount;i++){
           sum += scores[i];
        }
       
        sum = sum / gradeCount;
       
        if(90 <= sum && sum <= 100){
           grade = 'O';  
        } else if(80 <= sum && sum < 90){
           grade = 'E';
        } else if(70 <= sum && sum < 80){
           grade = 'A';
        } else if(55 <= sum && sum < 70){
           grade = 'P';
        } else if(40 <= sum && sum < 55){
           grade = 'D';
        } else if(sum < 40){
           grade = 'T';
        }
    }
};

class Student : private Person{
    
    public:
    void setFirstName(){
        cin>>firstName;
    }
    
    void setLastName(){
        cin>>lastName;
    }
    
    void setID(){
        cin>>idNumber;
    }
    
    void setGradeCount(){
        cin>>gradeCount;
    }
    
    void setGrades(){
        for(int i = 0; i <gradeCount;i++){
            cin>>scores[i];
        }
    }
    
    string getFirstName(){
        return firstName;
    }
    
    string getLastName(){
        return lastName;
    }
    
    int getidNumber(){
        return idNumber;
    }
    
    string getGrade(){
        calculate();
        return grade;
    }   
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Student student;
    
    student.setFirstName();
    student.setLastName();
    student.setID();
    student.setGradeCount();
    student.setGrades();
    
    cout<<"Name: "<<student.getLastName()<<", "<<student.getFirstName()<<endl;
    cout<<"ID: "<<student.getidNumber()<<endl;
    cout<<"Grade: "<<student.getGrade()<<endl;
    return 0;
}
