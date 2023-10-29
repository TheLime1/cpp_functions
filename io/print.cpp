//Outputting Text:
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
//Outputting Variables:
#include <iostream>

int main() {
    int age = 25;
    double price = 19.99;
    
    std::cout << "Age: " << age << std::endl;
    std::cout << "Price: $" << price << std::endl;
    
    return 0;
}
//Formatting Output:
#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.141592653589793;
    
    // Set precision for floating-point output
    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "The value of pi is approximately: " << pi << std::endl;
    
    return 0;
}
//Multiple Outputs:
#include <iostream>

int main() {
    int a = 5, b = 10, c = 15;
    
    std::cout << "a: " << a << " b: " << b << " c: " << c << std::endl;
    
    return 0;
}
//Using Escape Sequences:
#include <iostream>

int main() {
    std::cout << "This is a new line.\n";
    std::cout << "This is a tab character:\t|\tTabbed text.\n";
    std::cout << "This is a backslash: \\. This is a double backslash: \\\n";
    
    return 0;
}