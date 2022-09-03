#include <iostream>

int main() {
  
  double ph = 4.6;
  std::cout << "What is ph level?\n";
  std::cin >> ph;
  // Write the if, else if, else here:
  if (ph > 7)
  {
    std::cout << "Basic\n";
  }
  else if (ph < 7)
  {
    std::cout << "Acidic\n";
  }
  else
  {
    std::cout << "Neutral\n";
  }
  
  
 
}