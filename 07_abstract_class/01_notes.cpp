/*
Abstract Class:
    Abstract class is always a base class
    It contains atleast one pure virtual functions
    We cannot create an instance of abstract class
    
Pure Virtual Function:
    A pure virtual function is a function with no body
    It is not defined in the base class
    It is declared as:
        virtual void fn_name() = 0;
    A derived class must override the function, otherwise, compiler will give an error
    It is upto derived class to implement the function*/