# include <iostream>

using namespace std;

class Parant{
    public:
    int a;
    protected :
    int b;
    private:
    int c;
};

class Child: public Parant {
    public:
    void in(){
        cout<<"Enter a: "<<endl;
        cin>>a;
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
    void out(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main(){
    Child obj;
    obj.in();
    obj.out();
}