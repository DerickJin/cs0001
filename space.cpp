#include <iostream>

int main()
{
    double weight;

    std::string planet;

    std::cout << "What is your weight on earth?: ";
    std::cin >> weight;
    std::cout << "What is your destination planet?: ";
    std::cin >> planet;
    
    if (planet == "Mercury")
    {
        weight = weight * .39;
        std::cout << "Your weight on Mercury is: " << weight << "\n";
    }   else if (planet == "Venus")
    {
        weight = weight * .91;
        std::cout << "Your weight on Venus is: " << weight << "\n";
    }   else if (planet == "Mars")
    {
        weight = weight * .38;
        std::cout << "Your weight on Mars is: " << weight << "\n";
    }   else if (planet == "Jupiter")
    {
        weight = weight * 2.34;
        std::cout << "Your weight on Jupiter is: " << weight << "\n";
    }   else if (planet == "Saturn")
    {
        weight = weight * 1.06;
        std::cout << "Your weight on Saturn is: " << weight << "\n";
    }   else if (planet == "Uranus")
    {
        weight = weight * .92;
        std::cout << "Your weight on Uranus is: " << weight << "\n";
    }   else if (planet == "Neptune")
    {
        weight = weight * 1.19;
        std::cout << "Your weight on Neptune is: " << weight << "\n";
    }   else
    {
        std::cout << "Invalid\n";
    }
    
    
    

}