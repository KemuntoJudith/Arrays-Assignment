// Arrays Assignment
// Admission: 147683
//

#include <iostream>
using namespace std; 

/*Using C++,declare an array called ten, and initialize it to {10,20,30,40,50,60,70,80,90,100}
Then compute the sum of elements in that array
Compute the product of the array elements
Compute mean of the array elements
*/

int main()
{
    //Array declaration and initialization
    int ten[10] = { 10,20,30,40,50,60,70,80,90,100 };
                   //0,1,2,3,4,5,6,7,8,9 Indexing of the arrays

    int sum = ten[0] + ten[1] + ten[2] + ten[3] + ten[4] + ten[5] + ten[6] + ten[7] + ten[8] + ten[9];
    int product = ten[0] * ten[1] * ten[2] * ten[3] * ten[4] * ten[5] * ten[6] * ten[7] * ten[8] * ten[9];
    int mean = product / 10; 

    //Print the results 
    cout << "The sum of the elements in the array is: " << sum << endl;
    cout << "The product of the elements in the array is: " << product << endl;
    cout << "The mean of the elements in the array is: " << mean << endl; 

    return 0; 



}

