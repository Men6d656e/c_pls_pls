# include <iostream>
# include <cstring>
using namespace std;

class Person{
    protected:
    int id;
    char name[50], address[100];
    public:
    Person(){
        id = 0;
        name[0] = '\0';
        address[0] = '\0';
    }
    void input(){
        cout<<"Enter your id:"<<endl;
        cin>>id;
        cout<<"Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your address:"<<endl;
        cin>>address;
    }
    void output(){
        cout<<"\n Personal Information"<<endl;
        cout<<"your id: "<<id<<endl;
        cout<<"your name: " <<name<<endl;
        cout<<"your address: " <<address<<endl;
    }
};

class Student : public Person{
    private:
    int rno, marks;
    public:
    Student() : Person() {
        rno = marks = 0;
    }

    void input(){
        Person::input();
        cout<<"Enter your roll no: "<<endl;
        cin>>rno;
        cout<<"Enter your marks: "<<endl;
        cin>>marks;       
    }

    void output(){
        Person::output();
        cout<<"\n Educational information: \n";
        cout<<"Roll no: "<<rno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

class Scholarship : public Student {
    private:
    char sname[50];
    long amount;
    public:
    void input(){
        Student::input();
        cout<<"Enter scholarship name "<<endl;
        cin>>sname;
        cout<<"Enter Scholarship amount "<<endl;
        cin>>amount;
    }
    void output(){
        Student::output();
        cout<<"\n Scholarship information: \n";
        cout<<"Scholarship name "<<sname<<endl;
        cout<<"scholarship amount: "<<amount<<endl;
    }
};

int main(){
    Scholarship obj;
    obj.input();
    obj.output();
    return 0;
}