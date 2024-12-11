#include <iostream>
using namespace std;

class item {
    int number;
    static int count; // Declaration of static member

public:
    void getdata(int a) {
        number = a;
        count++;
    }

    void getcount()  {
        cout << count << "\n";
    }

    void getnumber()  {
        cout << number << "\n";
    }
};

// Definition and initialization of static member variable
int item::count ;

int main() {
    item a, b, c;

    // Initial count
    a.getcount();
    b.getcount();
    c.getcount();

    // Set data for each object
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    // Display count after setting data
    a.getcount();
    b.getcount();
    c.getcount();

    // Display number for each object
    a.getnumber();
    b.getnumber();
    c.getnumber();

    return 0;
}
