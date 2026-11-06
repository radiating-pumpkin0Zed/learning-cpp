#include <iostream>
#include <cstdio>
#include <vector> // for typedef no. 7
#include <ctime>  // for srand and time
#include <cmath>

// 6. Using namespace ---------------------------------------------

namespace first
{
    int x = 1;
}

// 7. typedef and typealiase ---------------------------------------------

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

// use using instead of typedef

using number_t = int;

int main()
{
    // 1. Basic Output & Variables -----------------------------

    std::cout << "Hello World!";
    int age = 92;
    bool joke = true;
    std::string name = "DawgChad";
    double pi = 3.14159;
    char grade = 'F';
    std::cout << "Name is: \n"
              << name << "\nAge: " << age;
    const double PI = 3.14159;

    std::cout << first::x; // using namespace first

    pairlist_t pairlist; // using no. 7
    text_t first_Name = "Bro";

    // 2. User input & Output --------------------------------

    std::cout << "\nEnter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "! Welcome to the C++ world.\n";
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old.\n";

    // 3. Conditional Statements -----------------------------

    if (age < 18)
    {
        std::cout << "You are a minor.\n";
    }
    else if (age >= 18 && age < 65)
    {
        std::cout << "You are an adult.\n";
    }
    else
    {
        std::cout << "You are a senior citizen.\n";
    }

    // 4. Random class -----------------------------

    srand(time(NULL));     // Seed the random number generator
    int dice = rand() % 6; // Generate a random number between 0 and 5
    // int dice = rand() % 6 + 1; // Generate a random number between 1 and 6
    std::cout << dice;

    // 5. Loops ---------------------------------------------

    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " ";
    }

    while (age < 100)
    {
        std::cout << "You are still young!\n";
        age++;
    }

    do
    {
        std::cout << "You are still young!\n";
        age++;
    } while (age < 100);

    // 8. Operators ---------------------------------------------

    // same as that of C (+, -, *, /, %, <<, <, >, ==, =, !=, >>, ^, &&, &, ||, |)

    // 9. Explicit type conversion ---------------------------------------------

    double goal = (int)23;

    // 10. Math functions ---------------------------------------------

    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(2, 4);
    z = sqrt(9);
    z = abs(-3);

    z = round(x);
    z = ceil(x);
    z = floor(x);

    // 11. Ternary operator ---------------------------------------------

    bool hungry = false;
    std::cout << (hungry ? "You are hungry" : "you are full");

    // 12. String methods --------------------------------------------- (05 - 11 - 26)

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // Use getline to read full line including spaces

    name.length();                    // Get length of the string
    name.append(" is a great name!"); // Append to the string
    name.insert(0, "Hello, ");        // Insert at the beginning
    name.erase(0, 6);                 // Erase the first 6 characters
    name.replace(0, 5, "Hi");         // Replace first 5 characters with "Hi"
    name.find("great");               // Find substring
    name.substr(0, 5);                // Get substring from index 0 to 5
    name == "Bro";                    // Compare strings
    name != "Bro";                    // Compare strings for inequality
    name.empty();                     // Check if string is empty
    name.clear();                     // Clear the string
    name.at(0);                       // Access character at index 0
}
