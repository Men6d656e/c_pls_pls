# include <iostream>

using namespace std;
class book{
        private:
        int bookId,pages;
        float price;
        public:
        void get_data(){
            cout<<"Enter the Book Id "<<endl;
            cin>>bookId;
            cout<<"Enter the Book Pages"<<endl;
            cin>>pages;
            cout<<"Enter the Book Price"<<endl;
            cin>>price;
        }
        void show () {
            cout<<"BookId "<<bookId<<" pages: "<<pages<<" and Price: "<<price<<endl;
        }
        void set_parameter(int bkid, int pgs, float pris){
            bookId = bkid;
            pages = pgs;
            price = pris;
        }
        float get_price(){
            return price;
        }
    };

int main(){

    

    book bk1;
    bk1.get_data();
    bk1.show();

    book bk2;
    int bk , pg ;
    float pr;
    cout<<"Now Enter another book data"<<endl;
    cout<<"Enter a book id "<<endl;
    cin>>bk;
    cout<<"Enter a book pages "<<endl;
    cin>>pg;
    cout<<"Enter a book price "<<endl;
    cin>>pr;
    bk2.set_parameter(bk,pg,pr);
    bk2.show();

    float pricebk1 = bk1.get_price();
    float pricebk2 = bk2.get_price();

    cout<<"The costly book is as follow: "<<endl;
    if(pricebk1< pricebk2){
        bk1.show();
    }else {
        bk2.show();
    }

    return 0;
}