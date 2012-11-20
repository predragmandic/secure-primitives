/*
 * 
 * 
 * 
 * 
 * 
 * 
 */
 

#include <stdlib.h>
#include <limits.h>
#include <iostream>




template <class T = int> class SecurePrim {
  
private:
  T m_nSecurePrimPartA;
  T m_nSecurePrimPartB;
  
  T decode() const;
  SecurePrim& set(const SecurePrim& other);
  SecurePrim& set(T value);
  unsigned char* serialize(T &value);
  
public:
  SecurePrim(T value = 0);
  operator T() { return decode(); }
  
  SecurePrim<T>& operator=(const SecurePrim& other);
  SecurePrim<T>& operator=(const T& value);
  
  SecurePrim<T>& operator+=(const SecurePrim& other);
  SecurePrim<T>& operator+=(const T& value);
  
  SecurePrim<T>& operator++();
  SecurePrim operator++(int);
  
  SecurePrim<T>& operator-=(const SecurePrim& other);
  SecurePrim<T>& operator-=(const T& value);
  
  SecurePrim<T>& operator--();
  SecurePrim operator--(int);
  
  SecurePrim<T>& operator*=(const SecurePrim& other);
  SecurePrim<T>& operator*=(const T& value);
  
  SecurePrim<T>& operator/=(const SecurePrim& other);
  SecurePrim<T>& operator/=(const T& value);
  
  SecurePrim<T>& operator%=(const SecurePrim& other);
  SecurePrim<T>& operator%=(const T& value);
  
};












// private functions
template <class T>
T SecurePrim<T>::decode() const {
  return this->m_nSecurePrimPartA ^ this->m_nSecurePrimPartB;
}

template <class T>
SecurePrim<T>& SecurePrim<T>::set(const SecurePrim<T>& other) {
  this->m_nSecurePrimPartA = rand();// % UINT_MAX;
  this->m_nSecurePrimPartB = other.decode() ^ this->m_nSecurePrimPartA;
  std::cout << m_nSecurePrimPartA;
  return *this;
}

template <class T>
SecurePrim<T>& SecurePrim<T>::set(T value) {
  this->m_nSecurePrimPartA = rand();// % UINT_MAX;
  this->m_nSecurePrimPartB = value ^ this->m_nSecurePrimPartA;
  std::cout << m_nSecurePrimPartA;
  return *this;
}

template <class T>
unsigned char* SecurePrim<T>::serialize(T &value) {
  return reinterpret_cast<unsigned char*>(&value);
}


// constructor
template <class T>
SecurePrim<T>::SecurePrim(T value) {
  this->set(value);
}

// =
template <class T>
SecurePrim<T>& SecurePrim<T>::operator=(const SecurePrim<T>& other) {
  return this->set(other);
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator=(const T& value) {
  return this->set(value);
}

// +=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator+=(const SecurePrim<T>& other) {
  return this->set(this->decode() + other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator+=(const T& value) {
  return this->set(this->decode() + value);
}

// ++x
template <class T>
SecurePrim<T>& SecurePrim<T>::operator++() {
  this->set(this->decode()+1);
  return *this;
}

// x++
template <class T>
SecurePrim<T> SecurePrim<T>::operator++(int) {
  SecurePrim<T> pre_increment = this->decode();
  this->set(this->decode()+1);
  return pre_increment;
}

// -=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator-=(const SecurePrim<T>& other) {
  return this->set(this->decode() - other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator-=(const T& value) {
  return this->set(this->decode() - value);
}

// --x
template <class T>
SecurePrim<T>& SecurePrim<T>::operator--() {
  this->set(this->decode()-1);
  return *this;
}
// x--
template <class T>
SecurePrim<T> SecurePrim<T>::operator--(int) {
  SecurePrim<T> pre_increment = this->decode();
  this->set(this->decode()-1);
  return pre_increment;
}

// *=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator*=(const SecurePrim<T>& other) {
  return this->set(this->decode() * other.decode());
}
template <class T>
SecurePrim<T>& SecurePrim<T>::operator*=(const T& value) {
  return this->set(this->decode() * value);
}

// /=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator/=(const SecurePrim<T>& other) {
  return this->set(this->decode() / other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator/=(const T& value) {
  return this->set(this->decode() / value);
}

// %=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator%=(const SecurePrim<T>& other) {
  return this->set(this->decode() % other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator%=(const T& value) {
  return this->set(this->decode() % value);
}


