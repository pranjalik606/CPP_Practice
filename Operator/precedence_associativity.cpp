#include<iostream>

using namespace std;

int main()

/* this example is for associativity which means priority of operators in execution
{
    int var1=10,var2=20,var3=30;
    float total;
    total=var3/var1+var2;    // here '/' operator has high precedence so it will execute first then '+' operator will execute
    cout << total << endl;   
}
*/

/*
{
    int var1=10,var2=20,var3=30;
    float total;
    total=var3/var1*var2;   // here precedence so we go through check associativity of operator it is from left to right
    cout << total << endl;
}
*/

/*
{
    int var1=10,var2=20,var3=30;
    float total;
    total=var2-var3+var1; // here precedence is same so going to check associativity of operator it is from left to right 
    cout << total << endl;
}
*/

/*
{
    int var1=10,var2=20,var3=30;
    float total;
    total= ++var2 - --var3 + var1; // unary = associativity (right to left) and arithmatic = associativity (left to right)
    cout << total << endl;
}
*/

/*
{
    int var1=10,var2=20,var3=30;
    float total;
    total=var2++ - var3-- + var1;
    cout << "total=" << total << endl <<  "var2=" << var2 << endl << "var3=" << var3 << endl;
}
*/

{
    int var1=10,var2=20,var3=30;
    float total;
    total=var2++ - (var3+var1);
    cout << "Total=" << total << endl << "var1=" << var1 << endl << "var2=" << var2 << endl << "var3=" << var3 << endl;  
}