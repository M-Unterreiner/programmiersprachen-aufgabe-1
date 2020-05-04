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

int sum_multiples(){
  int sum_mul = 0;
  for (int i = 0; i<= 1000; i++)
    if (i % 3 == 0 || i % 5 == 0){
      sum_mul += i;
    }
  return sum_mul;
}

TEST_CASE ( " sum_multiples " , " [sum_multiples] " )
{
  REQUIRE ( sum_multiples() == 234168);
}

double fract(double fract){
  int i = int (fract);
  std::cout << i << " " << fract << " " << std::endl;
    return (fract - i);
}

TEST_CASE ( "factorial" , " [fac] " ){
   REQUIRE (factorial(-15) == 0);
   REQUIRE (factorial(5) == 120);
   REQUIRE (factorial(10) == 3628800);
}

std::pair<double, double> cylinder(int r, int h){
  double vol = M_PI * r * r * h;
  double sur = (2*M_PI*(r*r))+(2*M_PI*r*h);
  return {vol, sur};
}

TEST_CASE ( "cylinder" , " [cylinder] " ){
  std::pair<double,double> result {cylinder(2,1.5)};
  std::pair<double,double> reference {12.5664, 37.6991};

  REQUIRE (reference.first  == Approx(result.first));
  REQUIRE (reference.second == Approx(result.second));
}
