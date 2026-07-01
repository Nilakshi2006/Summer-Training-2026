//This pointer is used when the paramter and data member has same name and here compiler gets confused and through err.So to remove the naming conflict we make use of this pointer.
#include<iostream>
using namespace std;
class date{
    private:
    int years,day,month;
    public:
    date(int years,int day,int month){
this->years=years;
this->day=day;
this->month=month;
cout<<"Constructer Called!"<<endl;
    }
    void show(){
        cout<<"Date(DD-MM-YY): "<<day<<"-"<<month<<"-"<<years<<endl;
    }
};
int main(){
    date obj(2006,22,03);
    obj.show();
    return 0;
}