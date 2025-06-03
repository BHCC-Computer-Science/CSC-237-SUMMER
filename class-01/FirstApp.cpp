/*
 * @Author: Ali Azhari
 * @date: 2023-10-01
 * @file FirstApp.cpp
 * @Description A simple C++ program that calculates total sales including tax.
 */


#include "Ali.cpp"

int main()
{
        int sales = 100;
    int tax = 10;
    int total = calculateTotal(sales, tax);
    printTotal(sales, tax, total);

    return 0;
}