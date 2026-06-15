# Take input from user
from unittest import case


a = float(input("Enter first number: "))
b = float(input("Enter second number: "))
while True:
    print("Choose operation:")
    print("1. Addition")
    print("2. Subtraction")
    print("3. Multiplication")
    print("4. Division")
    print("5. Modulus")
    print("6.exit")

    choice = int(input("please select any one: "))

    # Using match-case
    match choice:
        case 1:
            print(" the Sum sum =", a + b)
            
        case 2:
            print(" the Subtraction is =", a - b)
            
        case 3:
            print("Multiplication =", a * b)
        case 4:
            if b != 0:
                print("Division =", a / b)
            else:
                print("Error! Division by zero")
        case 5:
            print("Modulus =", a % b)
        case 6  :
            print("exiting the program...")
            break 