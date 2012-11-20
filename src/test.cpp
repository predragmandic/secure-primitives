/*
 * 
 * 
 * 
 * 
 * 
 * 
 */

#include <secureprim.hpp>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

#define SHORT_INT SecurePrim<short int>
#define INT SecurePrim<int>
#define LONG_INT SecurePrim<long int>
#define FLOAT SecurePrim<float>
#define DOUBLE SecurePrim<double>
#define LONG_DOUBLE SecurePrim<long double>
#define STRING SecurePrim<const char *>

int main() {
  srand ( time(0) );

  std::cout << "\nproba1 = 10"; LONG_INT proba1=10;
  std::cout << "\nproba2 = 5";  LONG_INT proba2=5;
  std::cout << "\nproba3 = 3";  LONG_INT proba3=3;
  std::cout << "\nproba"; LONG_INT proba;
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
  
  std::cout << "\nproba = proba1 * proba2";
  proba = proba1 * proba2;
  std::cout << "\n" << proba;
  std::cout << "\n" << proba1;
  std::cout << "\n" << proba2 << "\n\n";
  
  std::cout << "\nproba *= proba1 - 5";
  proba *= proba1 - 5;
  std::cout << "\n" << proba;
  std::cout << "\n" << proba1;
  std::cout << "\n\n";
  
  std::cout << "\nproba % proba3 + 1";
  std::cout << "\n" << proba % proba3 + 1;
  std::cout << "\n" << proba;
  std::cout << "\n" << proba3;
  std::cout << "\n\n";
  
  std::cout << "\nproba %= proba3 + 1";
  proba %= proba3 + 1;
  std::cout << "\n" << proba;
  std::cout << "\n" << proba3;
  std::cout << "\n\n";
  
  
  std::cout << "\nzsproba1 = jedan";  STRING zsproba1= "jedan";
  std::cout << "\nzsproba2 = dva";    STRING zsproba2= "dva";
  std::cout << "\nzsproba3 = tri";    STRING zsproba3= "tri";
  std::cout << "\n" << zsproba1;
  std::cout << "\n" << zsproba2;
  std::cout << "\n" << zsproba3;
  
  zsproba1=zsproba3;
  zsproba2=zsproba3;
  std::cout << "\n" << zsproba1;
  std::cout << "\n" << zsproba2;
  std::cout << "\n" << zsproba3;
  
  zsproba3="TRI";
  std::cout << "\n" << zsproba1;
  std::cout << "\n" << zsproba2;
  std::cout << "\n" << zsproba3;
  
  zsproba1="JEDAN";
  zsproba2="DVA";
  std::cout << "\n" << zsproba1;
  std::cout << "\n" << zsproba2;
  std::cout << "\n" << zsproba3;
  
  
  
  
  
  //std::cout << "\n";
  
  return 0;
}

