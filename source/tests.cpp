#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream>
#include <utility>
#include <cmath>

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}

// ############ 1.8 ############
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


// ############ 1.9 ############
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


// ############ 1.10 ############
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


// ############ 1.11 ############
double fract(double fract){
  int i = int (fract);
  std::cout << i << " " << fract << " " << std::endl;
    return (fract - i);
}

// ############ 1.12 ############
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

// ############ 1.13 ############
int factorial(int z){ 
  int fac = 1;

  if (z > 0){
    for( int i = 1; i <= z; i++){
      fac = fac * i; 
    }
    std::cout <<"The factorial: " << fac << std::endl;
    return fac;
  } else {
    return 0;
  }
}

TEST_CASE ( "factorial" , " [fac] " ){
   REQUIRE (factorial(-15) == 0);
   REQUIRE (factorial(5) == 120);
   REQUIRE (factorial(10) == 3628800);
}

// ############ 1.14 ############
bool is_prime (int zahl){
  bool prime = true;
  for (int i = 2; i < (zahl/2); i++){
    if (zahl % i == 0){
      prime = false;
    }
  }
  return prime;
}

TEST_CASE ("is_prime" , " [is_prime]"){
  REQUIRE (is_prime(2) == true);
  REQUIRE (is_prime(9) == false);
  REQUIRE (is_prime(113) == true);
}

// ############ 1.15 ############
double mileToKilometer(double miles){
  double kilometer; 
  kilometer = miles * 1.60934; 
  
  return kilometer;
}

TEST_CASE ("miles_to_kilometer" , " [miles_to_kilometer"){
  REQUIRE (mileToKilometer(1) == Approx(1.60934));
}