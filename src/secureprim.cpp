
#include <secureprim.h>


int SecureInteger::getInt() const {
  return this->m_nSecureIntegerPartA ^ this->m_nSecureIntegerPartB;
}
void SecureInteger::set(int value) {
  this->m_nSecureIntegerPartA = 4321;
  this->m_nSecureIntegerPartB = value ^ this->m_nSecureIntegerPartA;
}

SecureInteger::SecureInteger(int value) {
  this->set(value);
}

void SecureInteger::operator=(const SecureInteger& other) {
  this->set(other.getInt());
}
void SecureInteger::operator=(const int& value) {
  this->set(value);
}

SecureInteger SecureInteger::operator+(const SecureInteger& other) const {
  return SecureInteger(this->getInt() + other.getInt());
}
SecureInteger SecureInteger::operator+(const int& value) const {
  return SecureInteger(this->getInt() + value);
}
void SecureInteger::operator++() {
  this->set(this->getInt()+1);
}

void SecureInteger::operator+=(const SecureInteger& other) {
  this->set(this->getInt() + other.getInt());
}
void SecureInteger::operator+=(const int& value) {
  this->set(this->getInt() + value);
}

/*
SecureInteger SecureInteger::operator-(const SecureInteger& other) const {}
SecureInteger SecureInteger::operator-(const int& value) const {}
void SecureInteger::operator--() {}

void SecureInteger::operator-=(const SecureInteger& other) const {}
void SecureInteger::operator-=(const int& value) const {}

SecureInteger SecureInteger::operator*(const SecureInteger& other) const {}
SecureInteger SecureInteger::operator*(const int& value) const {}

void SecureInteger::operator*=(const SecureInteger& other) {}
void SecureInteger::operator*=(const int& value) {}

SecureInteger SecureInteger::operator%(const SecureInteger& other) const {}
SecureInteger SecureInteger::operator%(const int& value) const {}

void SecureInteger::operator%=(const SecureInteger& other) {}
void SecureInteger::operator%=(const int& value) {}

SecureInteger SecureInteger::operator/(const SecureInteger& other) const {}
SecureInteger SecureInteger::operator/(const int& value) const {}

void SecureInteger::operator/=(const SecureInteger& other) {}
void SecureInteger::operator/=(const int& value) {}

bool SecureInteger::operator==(const SecureInteger& other) const {}
bool SecureInteger::operator==(const int& value) const {}

bool SecureInteger::operator>(const SecureInteger& other) const {}
bool SecureInteger::operator>(const int& value) const {}

bool SecureInteger::operator>=(const SecureInteger& other) const {}
bool SecureInteger::operator>=(const int& value) const {}

bool SecureInteger::operator<(const SecureInteger& other) const {}
bool SecureInteger::operator<(const int& value) const {}

bool SecureInteger::operator<=(const SecureInteger& other) const {}
bool SecureInteger::operator<=(const int& value) const {}

bool SecureInteger::operator!=(const SecureInteger& other) const {}
bool SecureInteger::operator!=(const int& value) const {}
*/

/*
std::ostream& operator<<( ostream& os, const SecureInteger& si ) {
  si.print(os);
}
*/

/*
int main() {
  return 0;
}
*/

