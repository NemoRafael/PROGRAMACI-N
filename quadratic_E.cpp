// Este programa calcula las soluciones de una ecuación cuadrática



#include <iostream>
#include <cmath>
#include <utility>


std::pair<bool, std::pair<double, double >> solveQuadratic(double a, double b, double c)
{
    double disc= pow(b,2)-4*a*c;
    if (disc<0)// In this case there are not real solution
    {
        return{false,{0,0}};
    }

    double sqrtDisc = std::sqrt(disc);
    double x1= (-b - sqrtDisc) / (2 * a);
    double x2= (-b + sqrtDisc) / (2 * a);
    return{true,{x1,x2}};

}
int main ()
{

    double a, b,c;

    std::cout<<"Enter the values ​​of a: ";
    std::cin>> a ;
    
    if (a==0)
    {
        std::cout<<"Please, enter a correct value of a";
        return 1;
    }

    std::cout<<"Enter the values ​​of b: ";
    std::cin>> b ;
    
    std::cout<<"Enter the values ​​of c: ";
    std::cin>> c ;
    
    auto result = solveQuadratic(a, b, c);

    if (result.first) {
        std::cout << " \nx1 =  " << result.second.second<< " \nx2 =  " << result.second.first << "\n\n";
    } else {
        std::cout << "\nThere are no real solutions.\n\n";
    }


}