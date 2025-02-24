/*
        Name: Naswima Akter (Prova)
  Assignment: hw4
      Course: CISC 1600
    Due Date: 10/13/22
 Description: Function random (seed) to generate 10 random numbers
        File: .cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

unsigned int seed=7;
double random(unsigned int & seed);

int main()
{
  unsigned int seed = (unsigned int) time (0);
  const int MIN = 0, MAX = 1;

  for (unsigned int i= 0; i < 10; i++)
    {
      cout << "i = " << i << endl;
      cout << random(seed) << endl;
      cout << endl;
    }

  return 0;
}

  double random (unsigned int & seed)
{
  
  const int MODULUS = 15749;
  const int MULTIPLIER = 69069;
  const int INCREMENT = 1;
  seed = (( MULTIPLIER * seed ) + INCREMENT) % MODULUS;

  return double (seed)/ MODULUS; 
 }

/*
  ./lab3

  i = 0
  0.0436218

  i = 1
  0.91536

  i = 2
  0.979554

  i = 3
  0.833069

  i = 4
  0.226681

  i = 5
  0.634136

  i = 6
  0.104959

  i = 7
  0.416344

  i = 8
  0.456537

  i = 9
  0.548797
*/
