#include <iostream> 

using namespace std;

int main() 
{
    // varibales
    float coin, result, egp;

    egp = 15.74;

    cout << "Enter the money in $: ";
    cin >> coin;

    // porgram
    result = coin * egp;

    // print out the result
    cout << "the result in EGP= " << result;

    return 0;
}