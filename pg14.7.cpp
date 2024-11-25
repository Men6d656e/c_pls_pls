# include <iostream>
# include <cstring>
using namespace std;

class Read{
    private:
    int days ,pages;
    public:
    
    Read(){
        days = pages = 0;
    }

    void in(){
        cout<<"How many days have you read "<<endl;
        cin>>days;
        cout<<"How many pages have you read "<<endl;
        cin>>pages;
    }
    void show(){
        cout<<"The have read "<<pages<<" in " <<days<<" days."<<endl;
    }
    void operator += (Read r){
        days = days + r.days;
        pages = pages +r.pages;
    }
};
int main(){
    
    Read r1 ,r2;
    r1.in();
    r2.in();
    cout<<"\n reading no 1... "<<endl;
    r1.show();
    cout<<"\n reading no 2... "<<endl;
    r2.show();
    cout<<"\n adding r1 to r2 using += operator ... "<<endl;
    r2 += r1;
    cout<<"\n Total reading is as follow ... "<<endl;
    r2.show();
    
    
    return 0;
}