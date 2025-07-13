#include <iostream>  // for input/output
#include <cstdlib>  // for rand(), srand(), RAND_MAX
#include <ctime>   // for time()
#include <iomanip>  // for setprecision and fixed

int main() {
    std::srand(std::time(0));  // seed random number generator

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
