
#include<iostream>
 using namespace std;
class item{
int number;
float cost;

public:
void getdata(int a,float b){
number=a;
cost=b;


}
void putdata(){
    cout<<number <<"\n";
    cout<<cost<<"\n";

}

};

int main(){
item x,y;
x.getdata(10,20);
y.getdata(100,200);
x.putdata();
y.putdata();

}