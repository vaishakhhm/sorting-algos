#include <iostream>
#include <memory>
#include <array>
#include <vector>
#include "Sorting.hpp"
#include <random>

int main()
{
    using namespace sorting;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> uid (0, 20);
    std::vector<int> array;

    for (auto i = 0; i < 20; ++i )
    {
        array.emplace_back(uid(gen));
    }

    // std::vector<int> array = {2, 1, 4, 3, 5, 6, 8, 10, 9};

    sorting::Sort(array, sorting::SORTING_TYPE::BUBBLE_SORT);

    std::cout << "Sorted Array: " << "\n";
    for (auto i : array)
    {
        std::cout << i << " " << std::endl;
    }
    

    return 0;
}
