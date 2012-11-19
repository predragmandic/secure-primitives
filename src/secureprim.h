/*
 * 
 * 
 * 
 * 
 * 
 * 
 */
 
class SecureInteger {
  
private:
  int m_nSecureIntegerPartA;
  int m_nSecureIntegerPartB;
  
  int getInt() const;
  SecureInteger& set(const SecureInteger& other);
  SecureInteger& set(int value);
  
  
public:
  SecureInteger(int value = 0);
  operator int() { return getInt(); }
  
  SecureInteger& operator=(const SecureInteger& other);
  SecureInteger& operator=(const int& value);
  
  SecureInteger& operator+=(const SecureInteger& other);
  SecureInteger& operator+=(const int& value);
  
  SecureInteger operator+(const SecureInteger& other) const;
  SecureInteger operator+(const int& value) const;
  SecureInteger& operator++();
  SecureInteger operator++(int);
  
  SecureInteger& operator-=(const SecureInteger& other);
  SecureInteger& operator-=(const int& value);
  
  SecureInteger operator-(const SecureInteger& other) const;
  SecureInteger operator-(const int& value) const;
  SecureInteger& operator--();
  SecureInteger operator--(int);
  
  SecureInteger& operator*=(const SecureInteger& other);
  SecureInteger& operator*=(const int& value);
  
  SecureInteger operator*(const SecureInteger& other) const;
  SecureInteger operator*(const int& value) const;
  
  SecureInteger& operator/=(const SecureInteger& other);
  SecureInteger& operator/=(const int& value);
  
  SecureInteger operator/(const SecureInteger& other) const;
  SecureInteger operator/(const int& value) const;
  
  SecureInteger& operator%=(const SecureInteger& other);
  SecureInteger& operator%=(const int& value);
  
  SecureInteger operator%(const SecureInteger& other) const;
  SecureInteger operator%(const int& value) const;
  
};
