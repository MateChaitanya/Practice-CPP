#include <iostream>
using namespace std;

class test {
    int code;                      
    static int count;            
public:
    void setCode() {               
        code = ++count;            
    }

    void showCode() const {        
        cout << "Code: " << code << endl;
    }

    static void showCount() {      
        cout << "Count: " << count << endl;
    }
};

// Initialize the static member variable
int test::count = 0;

int main() {
    test t1, t2;

    t1.setCode();                  
    t2.setCode();                  

    test::showCount();            

    t1.showCode();                 
    t2.showCode();                 

    return 0;
}
