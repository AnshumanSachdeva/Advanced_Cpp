// Classes: 
    // class is created using the keyword class
    // It holds data and functions
    // Class links the code and data
    //The data and functions of the class are called member of the class

// Objects:
    //Objects are variables
    //They are the copy of a class
    //Each of them has Properties and Behavior
    // Properties are defined through data elements
    // Behavior is defined through member functions called methods

// Syntax:
    // class class-name
    // {
    // public/ private/ protected:      // access specifier
    // Data members
    // Member functions
    // };

// Access Specifier
    /* 1.Public specifier
        The public specifier allows the data to be accessed outside the class
        A public member can be used anywhere in the program

    2. Private specifier
        The members declared as private cannot be accessed outside the class
        Private members can be used only by the members of the class

    3.Protected specifier
        Protected members cannot be accessed from outside the class
        They can be accessed by a derived class

// Scope Resolution Operator:
    It is used to access hidden data
    To access the variable or function with the same name we use :: operator
    Suppose the local variable and the global variable have the same name
    The local variable gets the priority
    We can access the global variable usin operator