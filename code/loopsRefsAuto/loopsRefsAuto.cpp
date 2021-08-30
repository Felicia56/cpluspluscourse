#include <cstdio>

struct DontCopyMe {
   int resultA;
   int resultB;

   // This is material for the second day:
   DontCopyMe() = default;
   DontCopyMe(const DontCopyMe& other) :
       resultA(other.resultA),
       resultB(other.resultB)
   { printf("Please don't copy me\n"); }
};

int main() {
   // We create an array of DontCopyMe structs:
   DontCopyMe collection[10];

   // Task 1:
   // Write a for loop that initialises each struct's resultA and resultB with ascending integers.
   // Verify the output of the program before and after you do this.
   // unsigned int if negative array entries exist
   // here we DO need write access
   for(unsigned int i=0; i<10; i++){
     collection[i].resultA = i;
     collection[i].resultB = i+100;
     printf("resultA = %d\tresultB = %d\n", collection[i].resultA, collection[i].resultB);
   }


   // Task 2:
   // We use a range-based for loop to analyse the array of structs.
   // The problem is: we are copying every DontCopyMe ...
   // Fix this loop using references. -> auto & item
   // Hint: Fix the type declaration "auto" in the loop head.
   int resultA = 0;
   int resultB = 0;
   // here we do NOT need write access -> auto consy & item
   for (auto const & item : collection) {
      resultA += item.resultA;
      resultB += item.resultB;
      printf("resultA = %d\tresultB = %d\n", item.resultA, item.resultB);
      printf("resultA = %d\tresultB = %d\n", resultA, resultB);
   }


   printf("resultA = %d\tresultB = %d\n", resultA, resultB);

   return 0;
}

// Task 3:
// Think about which loop needs write access to the DontCopyMe.
// Make sure that all references that don't need write access are const.
// Hint: C++ understands "auto const". 
