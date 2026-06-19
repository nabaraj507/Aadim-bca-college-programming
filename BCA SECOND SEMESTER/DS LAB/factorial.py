def factorial(n):
    #Base Case
    if n <= 1:
        return 1
    #Recursive case
    else:
        return n*factorial(n - 1)
    
print(factorial(6))