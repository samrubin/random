#include <iostream>

using namespace std;

class Fraction {
public:

  // Operators
  Fraction operator=(const Fraction&);
  Fraction operator=(const int&);    // Set numerator to arg and denominator to 1
  Fraction operator+(const Fraction&) const;
  Fraction operator-(const Fraction&) const;
  Fraction operator*(const int&) const;

  friend ostream& operator<<(ostream&, const Fraction&);

  // Constructors
  Fraction();
  Fraction(const int);
  Fraction(const int, const int);

  // Destructor
  ~Fraction();

private:
  void print();
  int gcd();
  void simplify();
  int _numerator;
  int _denominator;
};

Fraction::Fraction() {
    _numerator = 0;
    _denominator = 1;      // And this is why we hate Java initialization ....
}

Fraction::Fraction(const int num) {
    _numerator = num;
    _denominator = 1;
}

Fraction::Fraction(const int num, const int den) {
    _numerator = num;
    _denominator = den;
}

Fraction::~Fraction() {
  // I no longer exist
  _denominator = 0;            // this should never be true 
  // cerr << "I no longer exist: " << this << ": " << *this << endl;
}

Fraction Fraction::operator+(const Fraction& f2) const {
  Fraction res;
  res._numerator = _numerator * f2._denominator + f2._numerator * _denominator;
  res._denominator = _denominator * f2._denominator;
  res.simplify();
  return res;
}

void Fraction::simplify() {
  int g = gcd();
  _numerator /= g;
  _denominator /= g;
  if(_denominator < 0) {
    _numerator *= -1;
    _denominator *= -1;
  }
}

void Fraction::print() {
  cout << _numerator;

  if(_denominator != 1 && _numerator != 0) {
    cout << "/" << _denominator;
  }
}

int Fraction::gcd() {
  int a = _numerator;
  int b = _denominator;
  // Euclidean algorithm to find gcd                                                                                                                                    
  do {
    int absb = b, absa = a;
    if(b < 0) absb *= -1;
    if(a < 0) absa *= -1;
    if(absb < absa) {
      // Swap                                                                                                                                                       
      int tmp = b;
      b = a; a = tmp;
    }
    b = b%a;
  } while(b != 0);

  return a;
}

Fraction Fraction::operator=(const Fraction& v) {
    _numerator = v._numerator;
    _denominator = v._denominator;

    return *this;
}

Fraction Fraction::operator=(const int& v) {
    _numerator = v;
    _denominator = 1;

    return *this;
}

Fraction Fraction::operator-(const Fraction& v) const {
  return (*this + v*-1);
}

Fraction Fraction::operator*(const int& v) const {
    Fraction res;
    
    res._numerator = _numerator * v;
    res.simplify();

    return res;
}

ostream& operator<<(ostream& os, const Fraction& c) {
  if (c._denominator  == 0) {
    os << "NaN";
  }
  else {
    os << c._numerator;
    if (c._denominator != 1) {
      os << "/" << c._denominator;
    }
  }
  return os;
}

int main() {
    Fraction f1(1,2);
    Fraction f2(3,4);
    Fraction f3;

    Fraction f4(4);
    Fraction f5 = 5; 

    f3 = f1 + f2;

    cout << "f1: " << f1 << endl;
    cout << "f2: " << f2 << endl;
    cout << "f3: " << f3 << endl;

    f5 = f4 + f3;
    cout << "f5: " << f5 << endl;

    f1 = f3 - f4;
    cout << "f3: " << f3 << endl;
    cout << "f4: " << f4 << endl;
    cout << "f1: " << f1 << endl;

    return 0;
}





