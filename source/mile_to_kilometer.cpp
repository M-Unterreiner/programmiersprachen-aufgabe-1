#include <iostream>
#include <string>

double mileToKilometer(double miles){
  double kilometer; 
  kilometer = miles * 1.60934; 
  
  return kilometer;
}

int main(){
  double miles, kilometer;
  
  std::cout << "Enter Miles to convert in Kilometers" << std::endl;
  std::cin >> miles;
  kilometer = mileToKilometer(miles);
  std::cout << miles << " Miles are " << kilometer << " kilometers. " << std::endl;  

  return 0;
}
