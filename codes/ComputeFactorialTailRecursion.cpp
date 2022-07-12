/** Return the factorial for a specified number */
int factorial(int n) 
{
  return factorial(n, 1); // Call auxiliary function
}

/** Auxiliary tail-recursive function for factorial */
int factorial(int n, int result) 
{
  if (n == 1) 
    return result;
  else
    return factorial(n - 1, n * result); // Recursive call
}
