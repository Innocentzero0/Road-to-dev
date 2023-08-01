#include <iostream>
using namespace std;

class Number
{
private:
    int num;
public:
    Number(int n) {
        num = n;
    }
    //complete the method
    int square() const {
        return num * num;
    };


    Number() = default;
};

int inAndOut() {
    int x;
    cin >> x;
    const Number myNum(x);
    cout << myNum.square();
	return 0;
}