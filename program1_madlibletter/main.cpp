//
// Mad Lib Letter
// Designed by: Michael Smith
// Due: 9/24/2021
//

#include <iostream>
#include <string>
#include <variant>

int main()
{
    /* Declare and initialize variables. */
    std::string nameOfBusiness;
    std::string location;
    std::string typeOfAnimal;
    std::string presentContinuousVerb;
    
    /* Prompt the user for inputs. */
    std::cout << "Enter a name of business > ";
    std::getline(std::cin, nameOfBusiness);

    std::cout << "Enter a location > ";
    std::getline(std::cin, location);

    std::cout << "Enter a type of animal > ";
    std::getline(std::cin, typeOfAnimal);

    std::cout << "Enter a present continous verb > ";
    std::getline(std::cin, presentContinuousVerb);

    /* Output the story. */ 
    std::cout << "Mr. M Palin" << "\n";
    std::cout << "Owner, " << nameOfBusiness << "\n";
    std::cout << location << ", England" << "\n";
    std::cout << "\n";
    std::cout << "Dear Mr. Palin," << "\n";
    std::cout << "I am writing this letter to complain about the service at" << "\n";
    std::cout << "your " << nameOfBusiness << "." << "\n";
    std::cout << "I recently purchased a "<< typeOfAnimal << " at this boutique. Once" << "\n";
    std::cout << "I returned home, I discovered that the " << typeOfAnimal << " was " << "\n";
    std::cout << "quite dead. When I tried to return it, the clerk said that it was" << "\n";
    std::cout << "not dead, merely " << presentContinuousVerb << ". I assure you that this" << "\n";
    std::cout << typeOfAnimal << " is not " << presentContinuousVerb << " but indeed " << "\n";
    std::cout << "quite dead." << "\n";
    std::cout << "\n";
    std::cout << "I appreciate your quick resolution of this matter." << "\n";
    std::cout << "\n";
    std::cout << "Sincerely," << "\n";
    std::cout << "J. Cleese." << std::endl;

    return 0;
}
