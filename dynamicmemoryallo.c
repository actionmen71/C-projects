// what is dynamic memory allocation?
// until now in c program  we have always predetermined created fixed size variable,arrays.
// arrays and these variables can't change their size later in the program
// all the above options take memory space is stack memory which always uses before compiling or runtime


// what happens if we don't know the requirement of memory we need and can change it during runtime
// dynamic memory allocation allows us to assign the memory to arrays and variables with the help of pointer
// dynamic memory to arrays and variables are assigned from heap memory
// it can be changed anytime during runtime




// four function to help with dynamic memory allocation
// 1. malloc            2. calloc         3. realloc         4.free

// 1.malloc(stands for memory allocation)
// with the help of pointer malloc can point to the heap memory with a size requirement
// since we use datatypes in c program and every system have different byte size for each data type
// we take memory in the name of int, float, char etc.
// it will reserve space in heap with requirement amount of bytes and return a void pointer
// void pointer doesn't have any datatype associated with it so we can then typecast the void pointer to our preference
// if space is insufficient then it returns the null pointer which rarely happens in modern systems
// the return pointer and their values are totally garbage values
// syntax
// ptr=(pointer type)malloc(size in bytes)
// eg: ptr=(int*)malloc(sizeof(int)); for 4 bytes
// ptr=(int*)malloc(4*sizeof(int));   for 16 bytes




// 2. callos(stands for contiguous allocation)
// it works in the same way as malloc but the memory space it reserves are in contiguous form like array
// there is a chance that we will not have sufficient space for contiguos memory allocation
// hence it will return null pointer
// unlike malloc initialized value return by void pointer is 0 here.
// syntax is little bit different here
// ptr=(pointer type)calloc(n,size in bytes); n for no of block and the size of block
// ptr=(int*)calloc(10,sizeof(int)); for 40 bytes







// 3. realloc(stand for reallocation)
// suppose we allocate heap memory to a pointer and that become insufficient later on
// we can reallocate the memory size of that pointer again during runtime without having to create another pointer
// it will save memory space and become more efficient
// syntax
// ptr=(pointer type)realloc(ptr, new size in bytes);
// ptr=(int*)realloc(ptr,40);



// 4. free
// used to free heap memory after its usage 
// if not freed then the reserved heap memory will go on for the entire program run
// heap memory will run out soon enough if not free
// hence it is compulsory to free memory each time its usage is completed
//  syntax
// free(pointer name to be free);
// free(ptr);



// programming
// dynamic memory function and methods come with stdlib library 