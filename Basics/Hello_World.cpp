#include <iostream>

/*using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    return 0;
}
*/

/*using namespace std;

int main()
{
    std::cout << "Hello" << std::endl << "World" << std::endl;
  //cout << "Hello" << endl << "World" << endl;
  return 0;  
}
*/

void writeValue(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';
    // no return statement, because this function doesn't return a value
}