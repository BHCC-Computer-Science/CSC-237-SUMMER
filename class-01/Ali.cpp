#include <iostream>
using namespace std;
void printTotal(int sales, int tax, int total) {
    cout << "Sales: " << sales << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total: " << total << endl;

}
int calculateTotal(int sales, int tax)
{
    return sales + tax;
}