#include <iostream>

namespace sorting
{
    enum SORTING_TYPE
    {
        BUBBLE_SORT = 1,
        INSERTION_SORT = 2
    };


    template <typename T>
    void BubbleSort(T& data)
    {
        int passes{0};

        for (size_t i = 0; i < data.size(); ++i)
        {
            for (size_t j = 0; j < data.size() - 1; ++j)
            {
                if (data.at(i) < data.at(j))
                {
                    ++passes;
                    auto temp = data.at(i);
                    data.at(i) = data.at(j);
                    data.at(j) = temp;
                }
            }
        }

        std::cout << "Passes took: " << passes << "\n";
    }

    // template <typename T>
    // void InsertionSort(T& data)
    // {
    //     return;
    // }

    template <typename T>
    void Sort(T& data, SORTING_TYPE type)
    {
        switch(type)
        {
            case SORTING_TYPE::BUBBLE_SORT:
                BubbleSort(data);
                break;
            case SORTING_TYPE::INSERTION_SORT:
                // InsertionSort(data);
                break;
            default:
                break;
        }
    }



}