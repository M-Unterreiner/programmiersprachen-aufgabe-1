#include <iostream>

int main()
{
  bool found = false;
  int testingNumber = 1;
  int i = 1;
  int endNumber = 20;
  std::cout << "Programm gestartet." << std::endl ;
  
    while (found == false){
      if (testingNumber % i == 0 && i < endNumber){
	std::cout << testingNumber << " % " << i << std::endl;
	i += 1;
      } else if (testingNumber % i == 0 && i >= endNumber){
	std::cout << testingNumber << " % " << i << std::endl;
	found = true;
      } else {
	std::cout << testingNumber << " % " << i << std::endl;
	i = 1;
	testingNumber += 1;
      } 
    }
  std::cout << "The found number is" << testingNumber << std::endl;
}
