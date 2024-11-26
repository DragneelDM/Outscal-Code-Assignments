#include <iostream>

int main() {
    
    int array[15];
    
    for(int index = 0; index < 15; index++)
    {
        if (index & 1)
            array[index] = 3 * index;
        else
            array[index] = 2 * index;
    }
    
    for (int index : array) {
        std::cout << index << " ";
    }

    return 0;
}
