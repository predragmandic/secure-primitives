/*
 * 
 * 
 * 
 * 
 * 
 * 
 */


#include <test.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <sys/time.h>

//asign

bool test_assignSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  
  value1 = TEST_VALUE_2;
  status = (value1==TEST_VALUE_2 && value1!=TEST_VALUE_1);
  
  return status;
}
bool test_assignSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2(TEST_VALUE_2);
  
  value1 = value2;
  status = (value1==TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_assignCompatiblePrimType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  double  value2 = TEST_VALUE_2;
  
  value1 = value2;
  bool status1 = (value1==TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  value1 = TEST_VALUE_1;
  value2 = TEST_VALUE_2;
  
  value2 = value1;
  bool status2 = (value1==TEST_VALUE_1 && value2==TEST_VALUE_1 && TEST_VALUE_1!=TEST_VALUE_2);
  
  status = status1 && status2;
  
  return status;
}
bool test_assignCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2(TEST_VALUE_2);
  
  value1=value2;
  bool status1 = (value1==TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  value1 = TEST_VALUE_1;
  value2 = TEST_VALUE_2;
  
  value2 = value1;
  bool status2 = (value1==TEST_VALUE_1 && value2==TEST_VALUE_1 && TEST_VALUE_1!=TEST_VALUE_2);
  
  status = status1 && status2;
  
  return status;
}

//add and assign
bool test_addAssignSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  
  value1 += value2;
  status = (value1==TEST_VALUE_1+TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_addAssignSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2(TEST_VALUE_2);
  
  value1 += value2;
  status = (value1==TEST_VALUE_1+TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  return status;
}
bool test_addAssignCompatiblePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  double value2 = TEST_VALUE_2;
  
  value1 += value2;
  status = (value1==TEST_VALUE_1+TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_addAssignCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2(TEST_VALUE_2);
  
  value1 += value2;
  bool status1 = (value1==TEST_VALUE_1+TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  value1 = TEST_VALUE_1;
  value2 = TEST_VALUE_2;
  
  value2 += value1;
  bool status2 = (value2==TEST_VALUE_1+TEST_VALUE_2 && value1==TEST_VALUE_1 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  status = status1 && status2;
  return status;
}

//add
bool test_addSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 + value2;
  status = (value3==TEST_VALUE_1+TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_addSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 + value2;
  status = (value3==TEST_VALUE_1+TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_addCompatiblePrimType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  double  value2 = TEST_VALUE_2;
  INT     value3(0);
  
  value3 = value1 + value2;
  status = (value3==TEST_VALUE_1+TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_addCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2 = TEST_VALUE_2;
  INT     value3(0);
  
  value3 = value1 + value2;
  status = (value3==TEST_VALUE_1+TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}

//increment prefix
bool test_incrementPrefix() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_1;
  
  status = (++value1 == value2+1);
  return status;
}

//increment suffix
bool test_incrementSuffix() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_1;
  
  status = (value1++ == value2);
  status = status && (value1 == value2+1);
  
  return status;
}

//subtract and assign
bool test_subtractAssignSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  
  value1 -= value2;
  status = (value1==TEST_VALUE_1-TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_subtractAssignSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2(TEST_VALUE_2);
  
  value1 -= value2;
  status = (value1==TEST_VALUE_1-TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  return status;
}
bool test_subtractAssignCompatiblePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  double value2 = TEST_VALUE_2;
  
  value1 -= value2;
  status = (value1==TEST_VALUE_1-TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_subtractAssignCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2(TEST_VALUE_2);
  
  value1 -= value2;
  bool status1 = (value1==TEST_VALUE_1-TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  value1 = TEST_VALUE_1;
  value2 = TEST_VALUE_2;
  
  value2 -= value1;
  bool status2 = (value2==TEST_VALUE_2-TEST_VALUE_1 && value1==TEST_VALUE_1 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  status = status1 && status2;
  return status;
}

//subtract
bool test_subtractSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 - value2;
  status = (value3==TEST_VALUE_1-TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_subtractSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 - value2;
  status = (value3==TEST_VALUE_1-TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_subtractCompatiblePrimType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  double  value2 = TEST_VALUE_2;
  INT     value3(0);
  
  value3 = value1 - value2;
  status = (value3==TEST_VALUE_1-TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_subtractCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2 = TEST_VALUE_2;
  INT     value3(0);
  
  value3 = value1 - value2;
  status = (value3==TEST_VALUE_1-TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}

//decrement prefix
bool test_decrementPrefix() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_1;
  
  status = (--value1 == value2-1);
  return status;
}

//decrement suffix
bool test_decrementSuffix() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_1;
  
  status = (value1-- == value2);
  status = status && (value1 == value2-1);
  return status;
}


//multiply and assign
bool test_multiplyAssignSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  
  value1 *= value2;
  status = (value1==TEST_VALUE_1*TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_multiplyAssignSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2(TEST_VALUE_2);
  
  value1 *= value2;
  status = (value1==TEST_VALUE_1*TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  return status;
}
bool test_multiplyAssignCompatiblePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  double value2 = TEST_VALUE_2;
  
  value1 *= value2;
  status = (value1==TEST_VALUE_1*TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_multiplyAssignCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2(TEST_VALUE_2);
  
  value1 *= value2;
  bool status1 = (value1==TEST_VALUE_1*TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  value1 = TEST_VALUE_1;
  value2 = TEST_VALUE_2;
  
  value2 *= value1;
  bool status2 = (value2==TEST_VALUE_1*TEST_VALUE_2 && value1==TEST_VALUE_1 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  status = status1 && status2;
  return status;
}

//multiply
bool test_multiplySamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 * value2;
  status = (value3==TEST_VALUE_1*TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_multiplySameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 * value2;
  status = (value3==TEST_VALUE_1*TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_multiplyCompatiblePrimType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  double  value2 = TEST_VALUE_2;
  INT     value3(0);
  
  value3 = value1 * value2;
  status = (value3==TEST_VALUE_1*TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_multiplyCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2 = TEST_VALUE_2;
  INT     value3(0);
  
  value3 = value1 * value2;
  status = (value3==TEST_VALUE_1*TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}

//divide and assign
bool test_divideAssignSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  
  value1 /= value2;
  status = (value1==TEST_VALUE_1/TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_divideAssignSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2(TEST_VALUE_2);
  
  value1 /= value2;
  status = (value1==TEST_VALUE_1/TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  return status;
}
bool test_divideAssignCompatiblePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  double value2 = TEST_VALUE_2;
  
  value1 /= value2;
  status = (value1==TEST_VALUE_1/TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_divideAssignCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2(TEST_VALUE_2);
  
  value1 /= value2;
  bool status1 = (value1==TEST_VALUE_1/TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  value1 = TEST_VALUE_1;
  value2 = TEST_VALUE_2;
  
  value2 /= value1;
  bool status2 = (value2==double(TEST_VALUE_2)/double(TEST_VALUE_1) && value1==TEST_VALUE_1 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  status = status1 && status2;
  return status;
}

//divide
bool test_divideSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 / value2;
  status = (value3==TEST_VALUE_1/TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_divideSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 / value2;
  status = (value3==TEST_VALUE_1/TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_divideCompatiblePrimType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  double  value2 = TEST_VALUE_2;
  INT     value3(0);
  
  value3 = value1 / value2;
  status = (value3==TEST_VALUE_1/TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_divideCompatibleType() {
  bool status = false;
  INT     value1(TEST_VALUE_1);
  DOUBLE  value2 = TEST_VALUE_2;
  INT     value3(0);
  
  value3 = value1 / value2;
  status = (value3==TEST_VALUE_1/TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}

//modulo and assign
bool test_moduloAssignSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  
  value1 %= value2;
  status = (value1==TEST_VALUE_1%TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_moduloAssignSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2(TEST_VALUE_2);
  
  value1 %= value2;
  status = (value1==TEST_VALUE_1%TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  return status;
}
bool test_moduloAssignCompatiblePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  long int value2 = TEST_VALUE_2;
  
  value1 %= value2;
  status = (value1==TEST_VALUE_1%TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2);
  
  return status;
}
bool test_moduloAssignCompatibleType() {
  bool status = false;
  INT       value1(TEST_VALUE_1);
  LONG_INT  value2(TEST_VALUE_2);
  
  value1 %= value2;
  bool status1 = (value1==TEST_VALUE_1%TEST_VALUE_2 && value2==TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  value1 = TEST_VALUE_1;
  value2 = TEST_VALUE_3;
  
  value2 %= value1;
  bool status2 = (value2==TEST_VALUE_3%TEST_VALUE_1 && value1==TEST_VALUE_1 && TEST_VALUE_1!=TEST_VALUE_3 && value1!=value2);
  
  status = status1 && status2;
  return status;
}

//modulo
bool test_moduloSamePrimType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  int value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 % value2;
  status = (value3==TEST_VALUE_1%TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_moduloSameType() {
  bool status = false;
  INT value1(TEST_VALUE_1);
  INT value2 = TEST_VALUE_2;
  INT value3(0);
  
  value3 = value1 % value2;
  status = (value3==TEST_VALUE_1%TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_moduloCompatiblePrimType() {
  bool status = false;
  INT       value1(TEST_VALUE_1);
  long int  value2 = TEST_VALUE_2;
  INT       value3(0);
  
  value3 = value1 % value2;
  status = (value3==TEST_VALUE_1%TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}
bool test_moduloCompatibleType() {
  bool status = false;
  INT       value1(TEST_VALUE_1);
  LONG_INT  value2 = TEST_VALUE_2;
  INT       value3(0);
  
  value3 = value1 % value2;
  status = (value3==TEST_VALUE_1%TEST_VALUE_2 && TEST_VALUE_1!=TEST_VALUE_2 && value1==TEST_VALUE_1 && value2==TEST_VALUE_2);
  
  return status;
}

double speed_test_asign() {
  timeval start, end;
  unsigned int testTime = 0;
  unsigned int compareTime = 0;
  
  SecurePrim<unsigned int> testValue(0);
  unsigned int compareValue = 0;
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    testValue = 5;
    gettimeofday(&end, NULL);
    testTime += (end.tv_usec - start.tv_usec);
  }
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    compareValue = 5;
    gettimeofday(&end, NULL);
    compareTime += (end.tv_usec - start.tv_usec);
  }
  
  //~ std::cout << "\n" << testValue;
  //~ std::cout << "\n" << compareValue;
  //~ std::cout << "\n" << testTime;
  //~ std::cout << "\n" << compareTime;
  
  return double(testTime) / double(compareTime);
}


double speed_test_preincrement() {
  timeval start, end;
  unsigned int testTime = 0;
  unsigned int compareTime = 0;
  
  SecurePrim<unsigned int> testValue(0);
  unsigned int compareValue = 0;
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    ++testValue;
    gettimeofday(&end, NULL);
    testTime += (end.tv_usec - start.tv_usec);
  }
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    ++compareValue;
    gettimeofday(&end, NULL);
    compareTime += (end.tv_usec - start.tv_usec);
  }
  
  return double(testTime) / double(compareTime);
}

double speed_test_postincrement() {
  timeval start, end;
  unsigned int testTime = 0;
  unsigned int compareTime = 0;
  
  SecurePrim<unsigned int> testValue(0);
  unsigned int compareValue = 0;
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    testValue++;
    gettimeofday(&end, NULL);
    testTime += (end.tv_usec - start.tv_usec);
  }
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    compareValue++;
    gettimeofday(&end, NULL);
    compareTime += (end.tv_usec - start.tv_usec);
  }
  
  return double(testTime) / double(compareTime);
}

double speed_test_addasign_primitive() {
  timeval start, end;
  unsigned int testTime = 0;
  unsigned int compareTime = 0;
  
  SecurePrim<unsigned int> testValue1(TEST_VALUE_1);
  SecurePrim<unsigned int> testValue2(TEST_VALUE_2);
  unsigned int compareValue1 = TEST_VALUE_1;
  unsigned int compareValue2 = TEST_VALUE_2;
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    testValue1 += compareValue2;
    gettimeofday(&end, NULL);
    testTime += (end.tv_usec - start.tv_usec);
  }
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    compareValue1 += compareValue2;
    gettimeofday(&end, NULL);
    compareTime += (end.tv_usec - start.tv_usec);
  }
  
  return double(testTime) / double(compareTime);
}
double speed_test_addasign() {
  timeval start, end;
  unsigned int testTime = 0;
  unsigned int compareTime = 0;
  
  SecurePrim<unsigned int> testValue1(TEST_VALUE_1);
  SecurePrim<unsigned int> testValue2(TEST_VALUE_2);
  unsigned int compareValue1 = TEST_VALUE_1;
  unsigned int compareValue2 = TEST_VALUE_2;
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    testValue1 += testValue2;
    gettimeofday(&end, NULL);
    testTime += (end.tv_usec - start.tv_usec);
  }
  
  for(int i=0; i < 100000; i++) {
    gettimeofday(&start, NULL);
    compareValue1 += compareValue2;
    gettimeofday(&end, NULL);
    compareTime += (end.tv_usec - start.tv_usec);
  }
  
  return double(testTime) / double(compareTime);
}

int main() {
  srand ( time(0) );
  
  std::cout << "\n\n";
  std::cout << "Testing operators....\n";
  
  std::cout << "\n" << (test_assignSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_assignSamePrimType";
  std::cout << "\n" << (test_assignSameType() ? "  pass  " : ">> FAIL ") << "  test_assignSameType";
  std::cout << "\n" << (test_assignCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_assignCompatiblePrimType";
  std::cout << "\n" << (test_assignCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_assignCompatibleType";
  std::cout << "\n" << (test_addAssignSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_addAssignSamePrimType";
  std::cout << "\n" << (test_addAssignSameType() ? "  pass  " : ">> FAIL ") << "  test_addAssignSameType";
  std::cout << "\n" << (test_addAssignCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_addAssignCompatiblePrimType";
  std::cout << "\n" << (test_addAssignCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_addAssignCompatibleType";
  std::cout << "\n" << (test_addSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_addSamePrimType";
  std::cout << "\n" << (test_addSameType() ? "  pass  " : ">> FAIL ") << "  test_addSameType";
  std::cout << "\n" << (test_addCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_addCompatiblePrimType";
  std::cout << "\n" << (test_addCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_addCompatibleType";
  
  std::cout << "\n" << (test_incrementPrefix() ? "  pass  " : ">> FAIL ") << "  test_incrementPrefix";
  std::cout << "\n" << (test_incrementSuffix() ? "  pass  " : ">> FAIL ") << "  test_incrementSuffix";
  
  std::cout << "\n" << (test_subtractAssignSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_subtractAssignSamePrimType";
  std::cout << "\n" << (test_subtractAssignSameType() ? "  pass  " : ">> FAIL ") << "  test_subtractAssignSameType";
  std::cout << "\n" << (test_subtractAssignCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_subtractAssignCompatiblePrimType";
  std::cout << "\n" << (test_subtractAssignCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_subtractAssignCompatibleType";
  std::cout << "\n" << (test_subtractSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_subtractSamePrimType";
  std::cout << "\n" << (test_subtractSameType() ? "  pass  " : ">> FAIL ") << "  test_subtractSameType";
  std::cout << "\n" << (test_subtractCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_subtractCompatiblePrimType";
  std::cout << "\n" << (test_subtractCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_subtractCompatibleType";
  
  std::cout << "\n" << (test_decrementPrefix() ? "  pass  " : ">> FAIL ") << "  test_decrementPrefix";
  std::cout << "\n" << (test_decrementSuffix() ? "  pass  " : ">> FAIL ") << "  test_decrementSuffix";
  
  std::cout << "\n" << (test_multiplyAssignSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_multiplyAssignSamePrimType";
  std::cout << "\n" << (test_multiplyAssignSameType() ? "  pass  " : ">> FAIL ") << "  test_multiplyAssignSameType";
  std::cout << "\n" << (test_multiplyAssignCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_multiplyAssignCompatiblePrimType";
  std::cout << "\n" << (test_multiplyAssignCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_multiplyAssignCompatibleType";
  std::cout << "\n" << (test_multiplySamePrimType() ? "  pass  " : ">> FAIL ") << "  test_multiplySamePrimType";
  std::cout << "\n" << (test_multiplySameType() ? "  pass  " : ">> FAIL ") << "  test_multiplySameType";
  std::cout << "\n" << (test_multiplyCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_multiplyCompatiblePrimType";
  std::cout << "\n" << (test_multiplyCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_multiplyCompatibleType";
  std::cout << "\n" << (test_divideAssignSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_divideAssignSamePrimType";
  std::cout << "\n" << (test_divideAssignSameType() ? "  pass  " : ">> FAIL ") << "  test_divideAssignSameType";
  std::cout << "\n" << (test_divideAssignCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_divideAssignCompatiblePrimType";
  std::cout << "\n" << (test_divideAssignCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_divideAssignCompatibleType";
  std::cout << "\n" << (test_divideSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_divideSamePrimType";
  std::cout << "\n" << (test_divideSameType() ? "  pass  " : ">> FAIL ") << "  test_divideSameType";
  std::cout << "\n" << (test_divideCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_divideCompatiblePrimType";
  std::cout << "\n" << (test_divideCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_divideCompatibleType";
  std::cout << "\n" << (test_moduloAssignSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_moduloAssignSamePrimType";
  std::cout << "\n" << (test_moduloAssignSameType() ? "  pass  " : ">> FAIL ") << "  test_moduloAssignSameType";
  std::cout << "\n" << (test_moduloAssignCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_moduloAssignCompatiblePrimType";
  std::cout << "\n" << (test_moduloAssignCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_moduloAssignCompatibleType";
  std::cout << "\n" << (test_moduloSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_moduloSamePrimType";
  std::cout << "\n" << (test_moduloSameType() ? "  pass  " : ">> FAIL ") << "  test_moduloSameType";
  std::cout << "\n" << (test_moduloCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_moduloCompatiblePrimType";
  std::cout << "\n" << (test_moduloCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_moduloCompatibleType";
  std::cout << "\n\n";
  std::cout << "Test complete.";
  std::cout << "\n\n";
  
  std::cout << "\n\n";
  std::cout << "Testing operation speed....\n";
  std::cout << "\n" << "TEST speed_test_asign:               normal * " << speed_test_asign();
  std::cout << "\n" << "TEST speed_test_preincrement:        normal * " << speed_test_preincrement();
  std::cout << "\n" << "TEST speed_test_postincrement:       normal * " << speed_test_postincrement();
  std::cout << "\n" << "TEST speed_test_addasign_primitive:  normal * " << speed_test_addasign_primitive();
  std::cout << "\n" << "TEST speed_test_addasign:            normal * " << speed_test_addasign();
  
  
  return 0;
}


