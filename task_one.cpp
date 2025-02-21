#include <iostream>
#include <vector>
#include <string>



struct Point {
    double x;
    double y;
    double z;
};

int main() {
    //_____________________1. _INITIALIZATION ____________________________________
    
    // By assignation
    int a;
    a = 12;
  
    // By direct initialization
    double e(2.71);

    // By uniform initialization (Vector)
    std::vector<std::string> palabras{"P", "A"};

    // By uniform initialization
    float b{1.11};

    // Output
    std::cout << "\n\nINITIALIZATION METHODS";
    std::cout << "\nint a: " << a;
    std::cout << "\ndouble e: " << e;
    std::cout << "\nstring c: ";
    for (const auto& palabra : palabras) {
        std::cout << palabra << " ";
    }
    std::cout << "\nfloat b: " << b; 
    
    //____________________3.__REFERENCES ____________________________________
    std::cout << "\n\nREFERENCES ";
    
    int& refa = a;
    a = 1212;

    double& refe = e;
    e = 2.71828182;  // Corregido el uso de coma
    
    float& refb = b;
    b = 0;

    // Se modifica el contenido del vector en lugar de reasignarlo
    palabras = {"Programación", "Avanzada"};

    std::cout << "\nint a: " << a;
    std::cout << "\ndouble e: " << e;
    std::cout << "\nvector palabras: ";
    for (const auto& palabra : palabras) {
        std::cout << palabra << " ";
    }
    std::cout << "\nfloat b: " << b;
    
    //____________________4.__STRUCTURED BINDING ____________________________________


    Point p{1.0, 2.0, 3.0};
    
    auto [x, y, z] = p;

    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    std::cout << "z: " << z << "\n";

   //____________________5.__Identifying l-values and r-values ____________________________________

   int c=a;


    a = 42; // a is an l-value because has a specific address in memory, 42 is an r-value because does not have a permanent memory address.
    int x1 = a + b; // x, a and b are l-values, they  have a specific address in memory,  (a + b) is an r-value because  does not have a permanent memory address.
    &a; // r-value because is a pointer and does not have a permanent memory address.
    std::string s = c + " World"; // s and c are l-value, they  have a specific address in memory, "World" and (c + " World") are an r-value because  do not have a permanent memory address.
    int& refX = x1 ; // refx is an r-value because  does not have a permanent memory address, x is an l-value because  have a permanent memory address.
    int&& rref = 100; // rref is an l-value, 100 is an r-value 

    return 0;
}
