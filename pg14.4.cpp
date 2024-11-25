# include <iostream>

using namespace std;

class add{
    private:
    int a,b;
    public:
    add(){
        a = b = 0;
    }
    void in(){
        cout<<"Enter a: "<<endl;
        cin>>a;
        cout<<"Enter b: "<<endl;
        cin>>b;
    }
    void show(){
        cout<<"A is: "<<a<<endl;
        cout<<"B is: "<<b<<endl;
    }
    add operator +(add p){
        add temp;
        temp.a=p.a+a;
        temp.b=p.b+b;
        return temp;
    }
    
};

int main(){
    add x,y,z;
    x.in();
    y.in();
    z = x + y;
    x.show();
    y.show();
    z.show();

    return 0;
}