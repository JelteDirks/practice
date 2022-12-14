#include <stdio.h>  // Needed to output to the world
#include <unistd.h>  // Needed to output to the world

// define the parameter list and the body yourself...
static void add_and_multi_with_4_parameters (int *a, int *b, int *c, int *d)
{
  int new_c = *a + *b;
  int new_d = *a * *b;
  *c = new_c;
  *d = new_d;
}

// define the parameter list and the body yourself...
static void add_and_multi_with_2_parameters (int *a, int *b)
{
  int new_a = *a + *b;
  int new_b = *a * *b;
  
  *a = new_a;
  *b = new_b;
}

// The main program function
int main(void) 
{
    int a = 73;
    int b = -5;
    int c;
    int d;

    for (int z = 0; z < a; z++)
    {
      b++;
    }
    //
      // Say hello to the world
      printf("Hello World!\n");
      
      // tasks to work with pointers:
      
      // task 1: call function add_with_4_parameters() to realize the postcodition: c=a+b and d=a*b
      // (remove the comments of the next 2 lines)
      add_and_multi_with_4_parameters (&a, &b, &c, &d);
      printf ("a=%d b=%d c=%d d=%d\n", a, b, c, d);
      
      // tasks to work with pointers:
      // task 2: call function add_with_2_parameters() to realize the postcodition: a=a+b and b=a*b
      //         (read them as: "new-a becomes old-a + old-b" and "new-b becomes old-a * old-b"
      // (remove the comments of the next 2 lines)
      add_and_multi_with_2_parameters (&a, &b);
      printf ("a=%d b=%d\n", a, b);
      
      // Successful termination
      
      return (0);
}

