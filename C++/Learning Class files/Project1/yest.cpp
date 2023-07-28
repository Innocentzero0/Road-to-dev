#include <iostream>
#include <vector>

int main() {
    int size = 5;
    std::vector<char> lst;
    int counter = 0;

    while (counter < size) {
        char apps[] = { 'g', 'a', 'r', 'r', 'i', 'o', 'a' };
        lst.push_back(apps[counter]);

        std::cout << counter << std::endl;

        for (char ch : lst) {
            std::cout << ch << " ";
        }
        std::cout << std::endl;

        std::cout << lst[counter] << std::endl;

        // lst.push_back(1); // Uncomment this line if you want to add an integer element to the vector
        counter++;
    }

    return 0;
}