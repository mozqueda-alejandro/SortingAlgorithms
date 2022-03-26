#ifndef INSERTION_H
#define INSERTION_H

#include <iostream>
#include <array>
#include "SortInterface.h"

template <class ItemType>
class Insertion : public SortInterface<ItemType> {
    int comparisons;
    int swaps;
    void initVars();
public:
    Insertion();
    void sort(int unsortedLen, ItemType unsorted[]);
    std::tuple<int, int> returnStats() const;
    std::string getSortName() const;
};

#include "Insertion.cpp"
#endif // INSERTION_H