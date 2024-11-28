# include <iostream>

using namespace std;

class Person {
    protected:
    int id;
    char name[50] , address[100];
    public:
    Person(){
        id = 0;
        name[0] = '\0';
        address[0] = '\0';
        cout<<"auto chala";
    }
    void getinfo(){
        cout<<"Enter your Id: "<<endl;
        cin>>id;
        cout<<"Enter your Name: "<<endl;
        cin>>name;
        cout<<"Enter your Address: "<<endl;
        cin>>address;     
    }
    void showinfo(){
        cout<<"\n Your personal informtion is as follow:\n"<<endl;
        cout<<"Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

class Student : public Person{
    private:
    int rno,marks;
    public:
    Student() : Person(){
        // Person::Person();
        rno = marks = 0;
    }
    void getEdu(){
        cout<<"Enter your roll no:"<<endl;
        cin>>rno;
        cout<<"Enter your marks:"<<endl;
        cin>>marks;
    }
    void showedu(){
        cout<<"\n Your education informtion is as follow:\n"<<endl;
        cout<<"Roll No: "<<rno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    Student s;
    s.getinfo();
    s.getEdu();
    s.showinfo();
    s.showedu();
    return 0;
}