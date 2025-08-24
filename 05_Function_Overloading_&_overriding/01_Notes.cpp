/* 
Function Overloading:
    1.Function Overloading means two or more functions can have same name.
    2.The number of arguments and the datatype of arguments will be different
    3.When a function is called it is selected based on the argument list

Function Overriding:
    1.Redefining a base class function in the derived class
    2.The derived class function overrides the base class function
    3.But the arguments passed and the return type is same.

Difference between overloading and overriding:
    Overloading can occur without inheritance. Overriding occurs when one class is inherited from another

    In overloading the arguments and the return type must differ. In overriding the arguments and the return type must be same

    In overloading the function name is same, but it behaves differently depending on the arguments passed to them. In overriding the function name is same, derived class function can perform different operations from the base class

FUNCTION OVERLOADING EXAMPLE:
    int add(int , int , int )
    float add(float , float )

FUNCTION OVERRIDING EXAMPLE:
    virtual int operation()
    int operation()

*/