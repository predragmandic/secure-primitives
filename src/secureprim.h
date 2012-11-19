/*



*/

#include <iostream>


class SecureInteger {
  
private:
  int m_nSecureIntegerPartA;
  int m_nSecureIntegerPartB;
  
  int getInt() const;
  void set(int value);
  
public:
  SecureInteger(int value);
  operator int() { return getInt(); }
  
  void operator=(const SecureInteger& other);
  void operator=(const int& value);
  
  SecureInteger operator+(const SecureInteger& other) const;
  SecureInteger operator+(const int& value) const;
  void operator++();
  
  void operator+=(const SecureInteger& other);
  void operator+=(const int& value);
  
  SecureInteger operator-(const SecureInteger& other) const;
  SecureInteger operator-(const int& value) const;
  void operator--();
  
  void operator-=(const SecureInteger& other);
  void operator-=(const int& value);
  
  SecureInteger operator*(const SecureInteger& other) const;
  SecureInteger operator*(const int& value) const;
  
  void operator*=(const SecureInteger& other);
  void operator*=(const int& value);
  
  SecureInteger operator%(const SecureInteger& other) const;
  SecureInteger operator%(const int& value) const;
  
  void operator%=(const SecureInteger& other);
  void operator%=(const int& value);

  SecureInteger operator/(const SecureInteger& other) const;
  SecureInteger operator/(const int& value) const;
  
  void operator/=(const SecureInteger& other);
  void operator/=(const int& value);
  
  bool operator==(const SecureInteger& other) const;
  bool operator==(const int& value) const;
  
  bool operator>(const SecureInteger& other) const;
  bool operator>(const int& value) const;
  
  bool operator>=(const SecureInteger& other) const;
  bool operator>=(const int& value) const;
  
  bool operator<(const SecureInteger& other) const;
  bool operator<(const int& value) const;
  
  bool operator<=(const SecureInteger& other) const;
  bool operator<=(const int& value) const;
  
  bool operator!=(const SecureInteger& other) const;
  bool operator!=(const int& value) const;
  
};


//ostream& operator<<( ostream& os, const SecureInteger& si );

