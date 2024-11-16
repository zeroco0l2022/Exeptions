
#include <iostream>
#include <stdexcept>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int _numerator, int _denominator) : numerator(_numerator), denominator(_denominator) {
        if (_denominator == 0) {
            throw runtime_error("Denominator cannot be zero");
        }
    }
};

int main() {
    int numerator, denominator;
        cin >> numerator;
        cin >> denominator;

    Fraction* fraction = nullptr;
try
{
    fraction = new Fraction(numerator, denominator);   
} catch (const runtime_error& e) {
    delete fraction;
    cerr << "Error: " << e.what() << '\n';
}
    
    return 0;
}
