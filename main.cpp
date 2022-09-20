#include <random>
#include <iostream>
#include <string>

long int sides;

int die(sides) {
    int d = random.randint(1,sides);
    return d; 
}

int main() {
    long int s;
    std::cout << "sides: ";
    std::cin >> s;
    std::cout << endl;
    int a = die(s);
    std::cout << a << endl;
}
