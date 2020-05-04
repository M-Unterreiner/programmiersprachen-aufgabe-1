#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include <utility>
#include <cmath>

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

int gcd(int a, int b){
  // std::cout << "Aufgabe 1.8 \n";
  if(b == 0){
    return a;
  } else if(a == 0){
    return b;
  } else if(a > b){
    return gcd(a - b, b);
  } else {
    return gcd(a, b - a);
  }
}

TEST_CASE ( " describe_gcd " , " [gcd] " )
{
  REQUIRE ( gcd (2 ,4) == 2);
  REQUIRE ( gcd (9 ,6) == 3);
  REQUIRE ( gcd (3 ,7) == 1);
}

int checksum(int check){

  int sum = 0;
  if (check <=0){
    return 0;
  } else if (check < 10){
    sum = check;
    
  } else {
    while (check != 0){
      sum += check % 10;
      check /= 10;
    }
  }
  return sum;
}

TEST_CASE ( " checksum " , " [checksum] " )
{
  REQUIRE ( checksum (0) == 0);
  REQUIRE ( checksum (33) == 6);
  REQUIRE ( checksum (11998842) == 42);
}


