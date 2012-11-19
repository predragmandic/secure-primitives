/*
 * 
 * 
 * 
 * 
 * 
 * 
 */
 
#include <secureprim.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand ( time(0) );

  std::cout << "\nproba1 = 10"; SecureInteger proba1=10;
  std::cout << "\nproba2 = 5";  SecureInteger proba2=5;
  std::cout << "\nproba3 = 3";  SecureInteger proba3=3;
  std::cout << "\nproba";
  SecureInteger proba;
  std::cout << "\n" << proba << "\n\n";
  
  std::cout << "\nproba = 40";
  proba = 40;
  std::cout << "\n" << proba << "\n\n";
  
  std::cout << "\nproba = proba1";
  proba = proba1;
  std::cout << "\n" << proba << "\n\n";
  
  std::cout << "\nproba += proba1";
  proba += proba1;
  std::cout << "\n" << proba << "\n\n";
  
  std::cout << "\nproba += 7";
  proba += 7;
  std::cout << "\n" << proba << "\n\n";
  
  std::cout << "\nproba = proba1 + proba2";
  proba = proba1 + proba2;
  std::cout << "\n" << proba;
  std::cout << "\n" << proba1;
  std::cout << "\n" << proba2 << "\n\n";
  
  std::cout << "\nproba = proba1 + 2";
  proba = proba1 + 2;
  std::cout << "\n" << proba;
  std::cout << "\n" << proba1 << "\n\n";
  
  std::cout << "\nproba = 2 + proba1";
  proba = 2 + proba1;
  std::cout << "\n" << proba;
  std::cout << "\n" << proba1 << "\n\n";
  
  std::cout << "\nproba++";
  std::cout << "\n" << proba++ << "\n\n";
  
  std::cout << "\n++proba";
  std::cout << "\n" << ++proba << "\n\n";
  
  
  std::cout << "\nproba == proba1 + proba2 - 1";
  std::cout << "\n" << ((proba == proba1 + proba2 - 1)?"true\n\n":"false\n\n");
  
  std::cout << "\nproba != proba1 + proba2 - 1";
  std::cout << "\n" << ((proba != proba1 + proba2 - 1)?"true\n\n":"false\n\n");
  
  std::cout << "\nproba == proba1";
  std::cout << "\n" << ((proba == proba1)?"true\n\n":"false\n\n");
  
  std::cout << "\nproba != proba1";
  std::cout << "\n" << ((proba != proba1)?"true\n\n":"false\n\n");
  
  
  std::cout << "\nproba == 14";
  std::cout << "\n" << ((proba == 14)?"true\n\n":"false\n\n");
  
  std::cout << "\nproba != 14";
  std::cout << "\n" << ((proba != 14)?"true\n\n":"false\n\n");
  
  std::cout << "\nproba > proba1";
  std::cout << "\n" << ((proba > proba1)?"true\n\n":"false\n\n");
  
  std::cout << "\nproba < proba1";
  std::cout << "\n" << ((proba < proba1)?"true\n\n":"false\n\n");
  
  
  
  //std::cout << "\n";
  
  return 0;
}

