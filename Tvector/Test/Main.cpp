#include "Class_TVector.h"
#include <iostream>

int main() {
    TVector<int> vec1;
    std::cout << "vec1 (default constructor):\n";
    std::cout << " - Capacity: " << vec1.capacity() << "\n";
    std::cout << " - Size: " << vec1.size() << "\n";
    std::cout << " - Is empty? " << (vec1.is_empty() ? "Yes" : "No") << "\n\n";

    TVector<int> vec2(5);
    std::cout << "vec2 (size constructor = 5):\n";
    std::cout << " - Capacity: " << vec2.capacity() << "\n";
    std::cout << " - Size: " << vec2.size() << "\n";
    std::cout << " - Is empty? " << (vec2.is_empty() ? "Yes" : "No") << "\n\n";

    int mass[5] = { 1,2,3,4,5};
    TVector<int> vec3(mass, 5);
    std::cout << "vec3 (size constructor = 5):\n";
    std::cout << " - Capacity: " << vec3.capacity() << "\n";
    std::cout << " - Size: " << vec3.size() << "\n";
    std::cout << " - Is empty? " << (vec3.is_empty() ? "Yes" : "No") << "\n\n";

    std::cout << vec3.data() << "\n";
    vec3.push_back_elem(8);
    std::cout << " - Is empty? " << (vec3.is_empty() ? "Yes" : "No") << "\n\n";
    vec3.print_elem();
    system("pause");
    return 0;
}