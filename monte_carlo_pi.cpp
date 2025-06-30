#include <iostream> // input and output (std::cout)
#include <cstdlib> // rand(), srand(), and RAND_MAX
#include <ctime>  // for time() 
#include <iomanip> // std::fixed and std::setprecision

int main() {
    std::srand(std::time(0));  // initialize a random number generator with current sys time

    for (int i = 0; i < 20; ++i) {  // iterate 20 times
        
        double x = static_cast<double>(rand()) / RAND_MAX; //random x coordinate between 0.0 and 1.0
        double y = static_cast<double>(rand()) / RAND_MAX; //random y coordinate between 0.0 and 1.0
        // print r with only 2 decimals x, y coordinates 
        std::cout << std::fixed << std::setprecision(2) << "(" << x <<", " << y << ")" << std::endl; 
    }

    return 0; 
}
