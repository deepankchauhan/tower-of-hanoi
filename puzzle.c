// this program solves the problem of tower_of_hanoi
#include <stdio.h>

// function created for tower_of_hanoi.
//  function tower_of_hanoi takes an integer n and three characters from_rod, to_rod and aux_rod as argument.
int tower_of_hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
  if (n == 1)
  {   
    printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod)
    return 0;
  }
  // this phenomenon shown below is called recursion, where the function is called within the function.
  tower_of_hanoi(n-1, from_rod, aux_rod, to_rod);
  printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod)
  tower_of_hanoi(n-1, aux_rod, to_rod, from_rod);  
} 


// main function
int main(void)
{
  int n;
  // using this function the value for n is taken from the user.
  scanf("%d", &n);
  // the function is called with 4 parameters, n, A, C and B respectively.
  tower_of_hanoi(n, 'A', 'C', 'B');
  return 0;
}
