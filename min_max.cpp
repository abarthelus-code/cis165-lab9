#include <iostream> 
using namespace std;

    int main() 
{ 
    int num;
    int smallest; 
    int largest;

    cout << "Enter numbers (-99 to stop): ";
    cin >> num;

    if (num == -99)
    {
    cout << "No Numbers Entered." << endl;
    }
    else
    {
    smallest = num;
    largest = num;

    while (num != -99)
    {
    if (num < smallest)
    {
    smallest = num;
    }

    if (num > largest)
    {
    largest = num;
    }
    cin >> num;
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
}

    return 0;
}