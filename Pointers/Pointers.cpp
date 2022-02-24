
#include <iostream>

int main()
{
    int liczba = 4;
    int liczby = 6;

    // Pointer to const. It means that you can change address but cannot change value
    const int* pointer = &liczba; 
    pointer = &liczby; //Good
    // *pointer = 8; //Bad

    //Constant pointer. It means that address cannot by change but you can change value
    int *const ptr = &liczba;

    // ptr = &liczby; // Bad
    *ptr = 10; // Good

    // Constant pointer to const. You cannot change anything
    const int* const p_ptr = nullptr;

    // p_ptr = &liczba; //Bad
    // *p_ptr = 10 //Bad

    // Pointer to pointer
    char* buff = new char[8];

    char** ptr_ptr = &buff;
    
    delete[] buff;

    std::cin.get();
}

