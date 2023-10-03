#include <iostream>

int main()
{
    //int A[5] = {2, 4, 6, 8, 10}; 
    // Can remove size of array: int A[] = {2, 4, 6, 8, 10}; 

    // If the array has more initial elements than the number of allocated elements, 
    // the remaining elements will default to 0.
    int A[10] = {1, 2, 3};


    /*A[0] = 12;
    A[1] = 15;
    A[2] = 20;
    A[3] = 25;*/

    for (int i = 0; i < 10; i++)
    {
        std::cout << A[i] << std::endl;
    }

    /*std::cout << sizeof(A) << std::endl;
    std::cout << A[1] << std::endl;
    printf("%d\n", A[2]);*/

    // Arrays must always contain constant values, 
    // so when we arbitrarily enter the number of arrays to declare, 
    // it will cause an error. To be able to do this, 
    // we must leave the initialization section empty and manually add elements one after another.

    int n = 0;
    std::cout << "Enter n = ";
    std::cin >> n;
    //int A[n] = { 2, 4, 6, 8 }; // Error
    int A[n]; // It will still run with other IDEs but visual studio will give an error saying it needs to specify a specific number of arrays (const).
    A[0] = 2;

    for (int i = 0; i < n; i++)
    {
        std::cout << A[i] << std::endl; // 2 will display and The remaining numbers will be garbage numbers
    }

}

