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
  bool status2 = (value2==TEST_VALUE_1-TEST_VALUE_2 && value1==TEST_VALUE_1 && TEST_VALUE_1!=TEST_VALUE_2 && value1!=value2);
  
  status = status1 && status2;
  return status;
}



//subtract
bool test_subtractSamePrimType() {
  return false;
}
bool test_subtractSameType() {
  return false;
}
bool test_subtractCompatiblePrimType() {
  return false;
}
bool test_subtractCompatibleType() {
  return false;
}



//multiply and assign
bool test_multiplyAssignSamePrimType() {
  return false;
}
bool test_multiplyAssignSameType() {
  return false;
}
bool test_multiplyAssignCompatiblePrimType() {
  return false;
}
bool test_multiplyAssignCompatibleType() {
  return false;
}



//multiply
bool test_multiplySamePrimType() {
  return false;
}
bool test_multiplySameType() {
  return false;
}
bool test_multiplyCompatiblePrimType() {
  return false;
}
bool test_multiplyCompatibleType() {
  return false;
}




//divide and assign
bool test_divideAssignSamePrimType() {
  return false;
}
bool test_divideAssignSameType() {
  return false;
}
bool test_divideAssignCompatiblePrimType() {
  return false;
}
bool test_divideAssignCompatibleType() {
  return false;
}




//divide
bool test_divideSamePrimType() {
  return false;
}
bool test_divideSameType() {
  return false;
}
bool test_divideCompatiblePrimType() {
  return false;
}
bool test_divideCompatibleType() {
  return false;
}




//modulo and assign
bool test_moduloAssignSamePrimType() {
  return false;
}
bool test_moduloAssignSameType() {
  return false;
}
bool test_moduloAssignCompatiblePrimType() {
  return false;
}
bool test_moduloAssignCompatibleType() {
  return false;
}




//modulo
bool test_moduloSamePrimType() {
  return false;
}
bool test_moduloSameType() {
  return false;
}
bool test_moduloCompatiblePrimType() {
  return false;
}
bool test_moduloCompatibleType() {
  return false;
}






int main() {
  srand ( time(0) );
  
  
  //std::cout << "\n" << (test_addAssignCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_addAssignCompatiblePrimType";
  
  
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
  std::cout << "\n" << (test_subtractAssignSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_subtractAssignSamePrimType";
  std::cout << "\n" << (test_subtractAssignSameType() ? "  pass  " : ">> FAIL ") << "  test_subtractAssignSameType";
  std::cout << "\n" << (test_subtractAssignCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_subtractAssignCompatiblePrimType";
  std::cout << "\n" << (test_subtractAssignCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_subtractAssignCompatibleType";
  std::cout << "\n" << (test_subtractSamePrimType() ? "  pass  " : ">> FAIL ") << "  test_subtractSamePrimType";
  std::cout << "\n" << (test_subtractSameType() ? "  pass  " : ">> FAIL ") << "  test_subtractSameType";
  std::cout << "\n" << (test_subtractCompatiblePrimType() ? "  pass  " : ">> FAIL ") << "  test_subtractCompatiblePrimType";
  std::cout << "\n" << (test_subtractCompatibleType() ? "  pass  " : ">> FAIL ") << "  test_subtractCompatibleType";
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
  
  
  return 0;
}


