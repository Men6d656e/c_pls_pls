
# include <iostream>
# include <string>
# include <cstring>
using namespace std;

class Tv {
    private:
    char brandName[20];
    char model[10];
    float retailPrice;
    public:
    Tv(char Brand[], char mod[] , float price);
    void change(char Brand[], char mod[] , float price);
    void display();
        
};

    Tv::Tv(char Brand[], char mod[] , float price){
        strcpy(brandName , Brand);
        strcpy(model , mod);
        retailPrice = price;
    }

    void Tv::change(char Brand[], char mod[] , float price){
        strcpy(brandName , Brand);
        strcpy(model , mod);
        retailPrice = price;
    }

    void Tv::display(){
        cout<<"Brand Name "<<brandName<<endl;
        cout<<"Brand Model "<<model<<endl;
        cout<<"price "<<retailPrice<<endl;
    }


int main () {
    Tv test("sony","Hdtv" , 25000);
    cout<<"Display the onject"<<endl;
    test.display();
    test.change("toshiba" , "stdv" , 22000);
    cout<<"display after change "<<endl;
    test.display();
    return 0;
}