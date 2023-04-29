# Sturctures of Programming Languages Project /\ Python vs C++ /\
Dylan Sarell

4/28/23

In my Project I decided to compare C++ and Python. Both use Procedural and Object-Oriented Programming Paradigms, So I thought I try to showcase differences in the 2 programming languages.

I made simple classes in C++ and Python to showcase differences. I made a simple coordinate or point Class, which is just that it can have a order pair of numbers of the form (x, y) or (x, y, z) for 2-Dimensional and 3-Dimensional Space. 

# Object Oriented Programming Implementation
**C++:** In C++, Object Oriented Programming is a lot more invloved and bit harder to understand. It has a private and Public sections which divides the data of the class to those that can be used inside and outside the class. My Coordinates Class also needs more than 1 constructor to initialize coordinates depending on the input. I have a default constructor, a 2 interger and 3 interger input constructor. A Dyanamic object also needs 4 important functions: Swap, Overloaded Asignment, Copy Constructor, and Destructor. You can also overload operators so that the operator does something specific to the object class. Example would be "+" being used to concatenate 2 Strings objects.

Functions in C++ also always state the parameter and Return type. So C++ functions can't easily accept multiple variable types. You would have to create a new Function for each type you want to take.

**Python:** In Python Object Oriented Programming is more easier to learn. Only 1 Constructor is needed and Allowed that could lead to more cleaner code. You give it the amount of aurguments it was given in it's declartion. Dynamic Memory requires no extra functions in the class for Python.

Functions in Python don't require you to state the return or parameter types so functions are a lot more versatile and flexible. Multiple types can use the same function.

# Garbage Collection:
**C++:** In C++ there is no Garbage Collection or a Garbage collector. The Programmer has to do deallocation on their own, it is not done automactially like in Python. In fact C++ uses a compiler not an Interpreter. C++ also uses pointers for Dynamic Memory Allocation.

For my Coordinates class in C++ I have to Include a Destructor for deallocating the Dynamic Memory usage, in order to recycle or reuse that memory. 

**Python:** In Python there is a Garbage Collector which automatically recycles memory for you. It Deallocates the dynamic memory too. Python also uses an Interpreter, which allows the file to be directly executed instead of creating an executable from compilation. So it can catch Runtime Variable Changes and errors.

For my Point Class in Python The memory is recycled automatically. The Point class can change size to 2 and 3 dimensional points.

# Declaration:
**C++:** You always have to Specify what type is the variable in Declarations in C++. 

For my Coordinates Class in C++ I have to Explicitly state the type of all the parameters, Agruments, function return types and variables. 

**Python:** You don't have to specify the type of the variable in the Declartions in Python. 

For my Point Class in Python I don't Have to set any Variable Declarations for any Functions, Parameters or Variables.

Both Python and C++ use similar types.

# Speed:
**C++:** Uses Compilation which is Faster than using a Interpreter. It also uses Static typing which means it does type checks during Compile time rather than Runtime. One Disadvantage is that it will miss runtime events and makes it harder for Dynamic Memory. Statically typed langauges must state the type of the variable. So that's why if your compile a file that is where you get notifed for any errors. The Compiler determines the variable type before run time.

**Python:** Uses an Interpreter which is slower than Compilation due to the fact that it is Dynamic typing. Dynamic typing does types checks at Runtime, during Execution. Dynamically Typed languages are not required to state the type of the Variable. So that's why you can execute the program and the program will stop if it encounters any errors. The Interpreter Determines the variable type during run time.

# Parameter Passing
**C++:** You get to choose the Specific type of Parameter passing mechanism. C++ allows Call-by-Value, Call-by-Value-Result and Call-by-Reference; You can choose from the 3 types for passing variables and objects to functions. It doesn't matter the type.

In My Coordinates Class in C++ I Directly Specify the parameter passing techniques for it's methods. & Means that it is Call-by-Reference. And if it's not there it is Call-by-value or Call-by-Value-Result. An Example method in my Class that is Call-by-value are the constructors which just need to copy the values in object declaration. A Method using Call-by-reference is my swap function in which is needs to swap and alter the variables of the 2 coordinates. 

**Python:** Python automatically decides what type of Parameter passing mechanism you are to use when passing specific types of variables. For simpler variable types like intergers, Strings, floats, etc you use Call-by-Value or Call-by-Value-Result, where it makes a copy of the variable within the function. For more complex Variables and objects like Lists you use Call-by-Reference, which has the same memory loacation. 

For My Point Class in Python, no types or parameter passing techniques are stated. In my Test.py file I created 3 functions showcasing the 3 different methods. I made functions that adds 10 to a user inputted number, one that is call by value (copies the value) and one that is call-by-value-result (when the copied value is saved back into the same variable/argument). Then I created a list of all 5 user inputted Numbers and chnaged them to -1 to -5 in a fucntion which is done by call-by-reference. The Whole List itself is altered and no copy is made.
