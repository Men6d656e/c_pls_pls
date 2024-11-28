# include <iostream>

using namespace std;

class Computer {
    public:
    Computer(){}
    Computer(int, int, double, int);
    void show();
    protected:
    int wordSize;
    int memorySize;
    double storageSize;
    int speed;
};

class Laptop :  public Computer{
    public:
    Laptop(){}
    Laptop(int, int, double, int, double, double, double ,double);
    void Show();
    private:
    double length, width, height;
    double weight;
};

Computer::Computer(int wdSiz , int memSiz, double storSiz , int spd){
    wordSize = wdSiz;
    memorySize = memSiz;
    storageSize = storSiz;
    speed = spd;
}
void Computer::show(){
    cout<<"Word size: "<<wordSize<<endl;
    cout<<"Memory size: "<<memorySize<<endl;
    cout<<"Speed: "<<speed<<" Mhz"<<endl;
}
Laptop::Laptop(int wdsiz, int memsiz, double storsiz, int spd, double len , double wid , double ht, double wt) : Computer(wdsiz , memsiz , storsiz, spd){
    length = len;
    width = wid;
    height = ht;
    weight = wt;
}

void Laptop::Show(){
    Computer::show();
    cout<<"Length :"<<length<<endl;
    cout<<"width :"<<width<<endl;
    cout<<"height :"<<height<<endl;
    cout<<"weight :"<<weight<<endl;
}

int main(){
    Computer comp(4,512,20,2);
    Laptop lap(8,1024,50,2,15,19,14,2);
    cout<<"Computer specifications: "<<endl;
    comp.show();
    cout<<"laptop specification: "<<endl;
    lap.Show();
    return 0;
}