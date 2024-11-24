# include <iostream>

using namespace std;

class Travel {
    private:
    int km , hr;
    public:
    Travel(){
        km = hr = 0;
    }
    void get(){
        cout<<"Enter Kilometers you traveled: "<<endl;
        cin >> km;
        cout<<"Enter hours: "<<endl;
        cin >> hr;
    }
    void show(){
        cout<<"You Travled "<<km<<" Kilometers in "<<hr<<" hours."<<endl;
    }
    Travel add(Travel p){
        Travel t;
        t.km = km + p.km;
        t.hr = hr + p.hr;
        return t;
    }
};

int main () {
    Travel my, yours, r;
    my.get();
    my.show();
    yours.get();
    yours.show();
    r = my.add(yours);
    cout<<"total Travling is as follow: "<<endl;
    r.show();
    return 0;
}