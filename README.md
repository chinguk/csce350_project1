# csce350_project1
1. For task 1, the user is prompted to enter two values, the number of lockers and the number of passes. An array of boolean values with size n is used to represent the state of each locker. The Locker function is called to simulate each pass. It iterates through the lockers and toggles the state of every i-th locker. After all the passes are ran, the state of each locker and how many lockers are open is outputed. 
For task 2, the user is prompted to enter two values they want to calculate the GCD of. The Seive function initializes a boolean array of prime of size n+1 to track prime numbers up to n. Numbers from 2 to n are marked as true. Then using the sieve of erathosthenes algorithm multiples of each prime number is marked as false. The GCD function takes in two integers. It iterates over each prime number up to num1. In the loop, if both integers are divisible by the current prime number, it updates gcd by multiplying it with i and divides both integers by i.
2. I had trouble implementing the solution for task 2. I had trouble translating the prime factorization method and sieve of erathosthenes to code. I overcame these challenges by rereading the notes and trial and error. 
3. There are no special instructions to compile my code