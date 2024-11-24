# include <iostream>

using namespace std;

class student{
    private:
    static int r;
    int rolno,marks;
    char name[50];
    public:
    student(){
        r++;
        rolno = r;
    }
    void in(){
        cout<<"Enter Name: "<<endl;
        cin>>name;
        cout<<"Enter Marks: "<<endl;
        cin>>marks;
    }
    void show(){
        cout<<"Roll no: "<<rolno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int student::r = 0;

int main() {
    student s1,s2,s3;
    s1.in(); 
    s2.in(); 
    s3.in();
    s1.show(); 
    s2.show(); 
    s3.show(); 
    return 0;
}