#include <iostream>  
#include <cstdlib>  
#include <ctime>   
#include <iomanip>  

int main() {
    std::srand(std::time(0)); 

    int totalPoints = 0;
    int pointsInsideCircle = 0;

    for (int i = 0; i < 10000; ++i) {  
        double x = static_cast<double>(rand()) / RAND_MAX;
        double y = static_cast<double>(rand()) / RAND_MAX;

        totalPoints++;

        if (x * x + y * y <= 1) {
            pointsInsideCircle++;
        }
    }
    double piEstimate = 4.0 * pointsInsideCircle / totalPoints;

    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Estimated pi: " << piEstimate << std::endl;

    return 0;
}
