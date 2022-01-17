// a storage class defines 
// 1.scope         2.default initial value      3.lifetime of variable
// scope defines where a variable can be used in the program like: local,global
// default initial value can be either 0 or garbage value of a variable
// lifetime determines for how much time it will run the variable



// types of storage classes

// 1. Auto storage class / Auto variables
// we have used this type of variables most of the time 
// we don't have to mention the class, it takes automatically 
// eg:-  auto int a;        int a;        both are correct and same
// scope(local to the body,like in main scope will be main, in function scope will be that function)
// default value is garbage random number
// lifetime(same of the local body)


// 2. External storage class / External variables
// same as global variables
// scope(global), default initial value(div) is 0, lifetime(lifetime of the program)
// anyone (main or another function) can change this variable value
// it is defined outside of main function or any other function
// takes memory throught the program so recommended to use less

// 3. External storage class / extern variable
// if some variable is declared or defined in other program
// we include that program with include statement
// then we can use EXTERN INT VARIABLE_NAME  to access the variable in current program
// if simply means that the variable is created externally in other program



// 4. External storage class / static variables
// we have used static variables often like pi etc.
// scope(local to the body like auto storage class)
// div is 0 and lifetime(throughout the program)
// for the same reasons as external(global) recommended to use less


// 5. Register storage class / Register variables
// most used variable are named register variables for faster access
// these are stored in actual cpu registers
// compiler send requests for use as register variables, it may or may not get assigned
// if it is not assigned then compiler assign auto class to that variable
// scope(local to the body)
// dvi is garabe value
// lifetime (till the local body is running or until it is defined)