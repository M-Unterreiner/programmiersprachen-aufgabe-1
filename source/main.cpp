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

// int main(){
//   bool number = false;
//   int count = 0; 
// 
//   
//   for (int i=1; number != true; i++){
//     for(int j=1; j <= 20; j++){
//       if (i % j == 0){
// 	      count++;
// 	     if (count == 20){
// 	      number = true;
// 	     std::cout << " The number is: " << i << std::endl;
// 	   }
//       }
//       else{
// 	break;
//       }
//     }
//     count = 0;
//   }
// 
// }
