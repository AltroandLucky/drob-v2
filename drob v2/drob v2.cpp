#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Rational {
private:
    int numerator, denominator;

public:
    
    Rational(int num, int denom) : numerator(num), denominator(denom ? denom : 1) {}

    Rational() : numerator(rand() % 100 + 1), denominator(rand() % 99 + 1) {}

    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }
    void setNumerator(int num) { numerator = num; }
    void setDenominator(int denom) { denominator = (denom != 0) ? denom : 1; }

    void display() const { cout << numerator << "/" << denominator << endl; }
};

int main() {
    srand(static_cast<unsigned>(time(0)));

    Rational num1(3, 4);
    Rational num2;

    cout << "Number 1: ";
    num1.display();

    cout << "Number 2 (random): ";
    num2.display();

    cout << "\nModifying numerator and denominator of Number 1:" << endl;
    num1.setNumerator(7);
    num1.setDenominator(5);
    cout << "New numerator of Number 1: " << num1.getNumerator() << endl;
    cout << "New denominator of Number 1: " << num1.getDenominator() << endl;
    cout << "Modified Number 1: ";
    num1.display();

    return 0;
}
