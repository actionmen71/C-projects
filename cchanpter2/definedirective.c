// preprocessing terms
// directives are statements beginning with #
// two popular directives are #include and #define 

// we use #include directive to include files in our current program
// the files(header files which are library files) can also  include other include directives
// all the other files included in that file will also be included with that one
// header files (library files) have prototypes of functions and not the implementation of the functions
// two ways to include
// <> these brackets are used to include the whole path
//"" double quotes indicates to search in the current directory
// since all the header files are stored in a particular directory of C compiler and not in our current project folder
// thus we use <> for header files

// preprocesor variables- variable like global variables which are defined using #define
// eg: #define PI 3.14 
// pi here is preprocessor variable(global variable)

// IMPORTANT!!!!
// preprocessor variable like above and global variables are almost same but with a key difference
// preporcessor variables like (#define PI 3.14) acts as constant and can't be changed
// int a=5; outside any function or main function is truly global variable and can be changed by any method

// #define for DEBUGGING
// Yes this can also be used for debugging


// #define for creating macros