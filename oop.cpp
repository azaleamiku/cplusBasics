#include <iostream>
using namespace std;

class Calculate
{
    public: 
    int num1 = 50, num2 = 30;

    void addition() {
        int result = num1 + num2;
        cout <<result << endl;
    }
};

int main(void) 
{
    Calculate add; 

    add.addition();

    return 0;

}