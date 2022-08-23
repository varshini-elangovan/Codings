# Program to swap two number 

# Read input from user

x = input("Enter value of x: ")
y = input("Enter value of y: ")

temp = x
x = y
y = temp 

print("The value of x {} and y {} ".format(x,y))

# without using temp variable
a = 12
b = 29

a, b = b, a

print("The value of a {} and b {} ".format(a,b))
