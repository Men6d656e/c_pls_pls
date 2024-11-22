# include <iostream>
using namespace std;

class Students{
    private:
    int marks;
    char grade;
    public:
    Students(int m , char g){
        marks = m;
        grade = g;
    }
    void show(){
        cout<<"Marks is "<<marks<<endl;
        cout<<"Grade is "<<grade<<endl;
    }
};

int main () {
    Students stdt1(90,'a');
    cout<<"Student 1"<<endl;
    stdt1.show();

    Students stdt2(80,'b');
    cout<<"Student 2"<<endl;
    stdt1.show();
    
    return 0;
}