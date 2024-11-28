# include <iostream>

using namespace std;

class Simple {
    protected:
    int a,b;
    public:
    Simple(){
        a=b=0;
    }
    void in(){
        cout<<"Enter a: "<<endl;
        cin>>a;
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
    void add(){
        cout<< "a + b = "<<a+b<<endl;
    }
    void sub(){
        cout<< "a - b = "<<a-b<<endl;
    }
    void mul(){
        cout<< "a x b = "<<a*b<<endl;
    }
    void div(){
        cout<< "a / b = "<<a/b<<endl;
    }
};

class Complex :  public Simple{
    public:
    void add(){
        if (a<=0 || b<=0){
            cout<<"invalid values. "<<endl;
        } else {
            Simple::add();
        }
    }
    void sub(){
        if (a<=0 || b<=0){
            cout<<"invalid values. "<<endl;
        } else {
            Simple::sub();
        }
    }
    void mul(){
        if (a<=0 || b<=0){
            cout<<"invalid values. "<<endl;
        } else {
            Simple::mul();
        }
    }
    void div(){
        if (a<=0 || b<=0){
            cout<<"invalid values. "<<endl;
        } else {
            Simple::div();
        }
    }
};

int main(){
    Complex obj;
    obj.add();
    obj.in();
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}