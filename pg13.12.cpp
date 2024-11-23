# include <iostream>
# include <cstring>

using namespace std;


class Book {
    private:
    int pg , pr;
    char title[50];
    public:
    void get(){
        cout<<"Enter title: ";
        cin>>title;
        cout<<"Enter pages: ";
        cin>>pg;
        cout<<"Enter Prices: ";
        cin>>pr;
    }
    void show () {
        cout<<"Tittle: "<<title<<endl;
        cout<<"Pages: "<<pg<<endl;
        cout<<"Price: "<<pr<<endl;
    }
};

int main () {
    Book b1;
    b1.get();
    Book b2(b1);
    Book b3 = b1;
    cout<<"the details of b1: "<<endl;
    b1.show();
    cout<<"the details of b2: "<<endl;
    b2.show();
    cout<<"the details of b3: "<<endl;
    b2.show();
    
    return 0;
}
