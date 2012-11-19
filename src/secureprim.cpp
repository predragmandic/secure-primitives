/*
 * 
 * 
 * 
 * 
 * 
 * 
 */
 
#include <secureprim.h>
#include <stdlib.h>

// private functions
int SecureInteger::getInt() const {
  return this->m_nSecureIntegerPartA ^ this->m_nSecureIntegerPartB;
}
SecureInteger& SecureInteger::set(const SecureInteger& other) {
  this->m_nSecureIntegerPartA = rand() % 65536;
  this->m_nSecureIntegerPartB = other.getInt() ^ this->m_nSecureIntegerPartA;
  std::cout << m_nSecureIntegerPartA;
  return *this;
}
SecureInteger& SecureInteger::set(int value) {
  this->m_nSecureIntegerPartA = rand() % 65536;
  this->m_nSecureIntegerPartB = value ^ this->m_nSecureIntegerPartA;
  std::cout << m_nSecureIntegerPartA;
  return *this;
}

// constructor
SecureInteger::SecureInteger(int value) {
  this->set(value);
}

// =
SecureInteger& SecureInteger::operator=(const SecureInteger& other) {
  return this->set(other);
}
SecureInteger& SecureInteger::operator=(const int& value) {
  return this->set(value);
}

// +=
SecureInteger& SecureInteger::operator+=(const SecureInteger& other) {
  return this->set(this->getInt() + other.getInt());
}
SecureInteger& SecureInteger::operator+=(const int& value) {
  return this->set(this->getInt() + value);
}

// +
SecureInteger SecureInteger::operator+(const SecureInteger& other) const {
  return SecureInteger(*this) += other;
}
SecureInteger SecureInteger::operator+(const int& value) const {
  return SecureInteger(*this) += value;
}

// ++x
SecureInteger& SecureInteger::operator++() {
  this->set(this->getInt()+1);
  return *this;
}

// x++
SecureInteger SecureInteger::operator++(int) {
  SecureInteger pre_increment = this->getInt();
  this->set(this->getInt()+1);
  return pre_increment;
}

// -=
SecureInteger& SecureInteger::operator-=(const SecureInteger& other) {
  return this->set(this->getInt() - other.getInt());
}
SecureInteger& SecureInteger::operator-=(const int& value) {
  return this->set(this->getInt() - value);
}

// -
SecureInteger SecureInteger::operator-(const SecureInteger& other) const {
  return SecureInteger(*this) -= other;
}
SecureInteger SecureInteger::operator-(const int& value) const {
  return SecureInteger(*this) -= value;
}

// --x
SecureInteger& SecureInteger::operator--() {
  this->set(this->getInt()-1);
  return *this;
}
// x--
SecureInteger SecureInteger::operator--(int) {
  SecureInteger pre_increment = this->getInt();
  this->set(this->getInt()-1);
  return pre_increment;
}

// *=
SecureInteger& SecureInteger::operator*=(const SecureInteger& other) {
  return this->set(this->getInt() * other.getInt());
}
SecureInteger& SecureInteger::operator*=(const int& value) {
  return this->set(this->getInt() * value);
}

// *
SecureInteger SecureInteger::operator*(const SecureInteger& other) const {
  return SecureInteger(*this) *= other;
}
SecureInteger SecureInteger::operator*(const int& value) const {
  return SecureInteger(*this) *= value;
}

// /=
SecureInteger& SecureInteger::operator/=(const SecureInteger& other) {
  return this->set(this->getInt() / other.getInt());
}
SecureInteger& SecureInteger::operator/=(const int& value) {
  return this->set(this->getInt() / value);
}

// /
SecureInteger SecureInteger::operator/(const SecureInteger& other) const {
  return SecureInteger(*this) /= other;
}
SecureInteger SecureInteger::operator/(const int& value) const {
  return SecureInteger(*this) /= value;
}

// %=
SecureInteger& SecureInteger::operator%=(const SecureInteger& other) {
  return this->set(this->getInt() % other.getInt());
}
SecureInteger& SecureInteger::operator%=(const int& value) {
  return this->set(this->getInt() % value);
}

// %
SecureInteger SecureInteger::operator%(const SecureInteger& other) const {
  return SecureInteger(*this) %= other;
}
SecureInteger SecureInteger::operator%(const int& value) const {
  return SecureInteger(*this) %= value;
}

