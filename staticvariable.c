// static variable are those variable who retain their values throughout the program
// static variable are initialized only once and then they retain their values as the program continues

// since static variables consume memory throughout the program they are not encouraged to use
// they are stored in special memory segment of program memory layout where global variable and static variable are stored


// if static variable are not initialized then it takes the 0 value.
// one more thing
// int a=func1(); 
// most of the time we return the value of a function to variable just like above and print it
// static int a=funct();
// static variables can't be assigned functions they only take constant literals like integer values
// why?
// because global/static variables are assigned memory early during preprocessing and functions are 
// compiled in compilation process
#include <stdio.h>

int func1()
{
    int a ; //this is normal variable(auto variable)
    // whenever this function will be called it will always start with a=3
    // the value of a will reset to 3 each time this function will be called.
    a++;
    return a;
}

int func2()
{
    static int b ; //static variable
    // when this function will be called first time it will start from a=3
    // next time this statement will be skipped
    // the value of a is retained from previous sessions or function calls
    // it will retain the value even if it is changed from outer scope
    b++;
    return b;
}

int main()
{
    int a1 = func1();
    printf("%d\n", a1);
    int b1 = func2();
    printf("%d\n", b1);
    a1 = func1();
    printf("%d\n", a1);
    b1 = func2();
    printf("%d\n", b1);
    // output
    // 4
    // 4
    // 4
    // 5 this value is from static variable who have retained its value from first run

    return 0;
}
