/*
 * 
 * 
 * 
 * 
 * 
 * 
 */
 

#include <stdlib.h>
#include <iostream>
//#include <limits.h>

template <class T = unsigned char> class SecurePrim {
  
private:
  
  unsigned char m_bSecurePrimPartA[sizeof(T)];
  unsigned char m_bSecurePrimPartB[sizeof(T)];
  
  void serialize(T &value, unsigned char (&charArray)[sizeof(T)]);
  
  void encodeArray(
              unsigned char (&charArray)[sizeof(T)],
              unsigned char (&securePartA)[sizeof(T)],
              unsigned char (&securePartB)[sizeof(T)]
            );
  
  void decodeArray(
            const unsigned char (&securePartA)[sizeof(T)],
            const unsigned char (&securePartB)[sizeof(T)],
            unsigned char (&charArray)[sizeof(T)]
          ) const;
  
  T decode() const;
  
  SecurePrim& set(const SecurePrim& other);
  SecurePrim& set(T value);
  
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

//serialize
template <class T>
void SecurePrim<T>::serialize(T &value, unsigned char (&charArray)[sizeof(T)]) {
  std::copy(
    static_cast<const char*>(static_cast<const void*>(&value)),
    static_cast<const char*>(static_cast<const void*>(&value)) + sizeof(value),
    charArray);
}

//encodeArray
template <class T>
void SecurePrim<T>::encodeArray(
                                unsigned char (&charArray)[sizeof(T)],
                                unsigned char (&securePartA)[sizeof(T)],
                                unsigned char (&securePartB)[sizeof(T)]
                              )
{
  for(unsigned int i=0; i<sizeof(T); i++) {
    securePartA[i] = rand() % sizeof(char);
    securePartB[i] = securePartA[i] ^ charArray[i];
  }
}

//decodeArray
template <class T>
void SecurePrim<T>::decodeArray(
            const unsigned char (&securePartA)[sizeof(T)],
            const unsigned char (&securePartB)[sizeof(T)],
            unsigned char (&charArray)[sizeof(T)]
          ) const
{
  for(unsigned int i=0; i<sizeof(T); i++) {
    charArray[i] = securePartA[i] ^ securePartB[i];
  }
}

//decode
template <class T>
T SecurePrim<T>::decode() const {
  unsigned char decodedArray[sizeof(T)];
  decodeArray(m_bSecurePrimPartA, m_bSecurePrimPartB, decodedArray);
  return *reinterpret_cast<T*>(decodedArray);
}


//set
template <class T>
SecurePrim<T>& SecurePrim<T>::set(const SecurePrim<T>& other) {
  return set(other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::set(T value) {
  unsigned char serializedPrim[sizeof(T)];
  serialize(value, serializedPrim);
  encodeArray(serializedPrim, m_bSecurePrimPartA, m_bSecurePrimPartB);
  return *this;
}


// constructor
template <class T>
SecurePrim<T>::SecurePrim(T value) {
  set(value);
}

// =
template <class T>
SecurePrim<T>& SecurePrim<T>::operator=(const SecurePrim<T>& other) {
  return set(other);
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator=(const T& value) {
  return set(value);
}

// +=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator+=(const SecurePrim<T>& other) {
  return set(decode() + other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator+=(const T& value) {
  return set(decode() + value);
}

// ++x
template <class T>
SecurePrim<T>& SecurePrim<T>::operator++() {
  return set(decode() + 1);
}

// x++
template <class T>
SecurePrim<T> SecurePrim<T>::operator++(int) {
  SecurePrim<T> pre_increment = decode();
  set(decode() + 1);
  return pre_increment;
}

// -=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator-=(const SecurePrim<T>& other) {
  return set(decode() - other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator-=(const T& value) {
  return set(decode() - value);
}

// --x
template <class T>
SecurePrim<T>& SecurePrim<T>::operator--() {
  return set(decode() - 1);
}
// x--
template <class T>
SecurePrim<T> SecurePrim<T>::operator--(int) {
  SecurePrim<T> pre_increment = decode();
  set(decode() - 1);
  return pre_increment;
}

// *=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator*=(const SecurePrim<T>& other) {
  return set(decode() * other.decode());
}
template <class T>
SecurePrim<T>& SecurePrim<T>::operator*=(const T& value) {
  return set(decode() * value);
}

// /=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator/=(const SecurePrim<T>& other) {
  return set(decode() / other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator/=(const T& value) {
  return set(decode() / value);
}

// %=
template <class T>
SecurePrim<T>& SecurePrim<T>::operator%=(const SecurePrim<T>& other) {
  return set(decode() % other.decode());
}

template <class T>
SecurePrim<T>& SecurePrim<T>::operator%=(const T& value) {
  return set(decode() % value);
}


