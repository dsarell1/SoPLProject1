# Dylan Sarell
# 4/28/23
# Python File
import math
import point

# Function Definitions 
# You don't need to any parameter or return types for functions.
# -----------------------------------------------------------------
def greetings():
    print("Hello World Coordinates")
    print("Loacated at: ")

def callByValue(Number):
    Number += 10

def callByValueResult(Number):
    Number += 10
    return Number

def callByReference(a):
        a[0] = -1
        a[1] = -2
        a[2] = -3
        a[3] = -4
        a[4] = -5

# -----------------------------------------------------------------
# As You Can See Python Doesn't use or need the type of the Variable 
# when doing Declarations, while C++ needs you to state the Spefic Type.

# Automatically assumes the type is String for Number and Number2.
print("Input First Point")
Number = int(input("What is your Favoirte Number: "))
Number2 = int(input("What is Your Other Favorite Number: "))

greetings()
point1 = point.Point(Number, Number2)
point1.draw2()

print("Input Second Point")
Number3 = int(input("What is your Number: "))
Number4 = int(input("What is Your Other Number: "))
Number5 = int(input("What is Your Other Other Number: "))

greetings()
point2 = point.Point(Number3, Number4, Number5)
point2.draw3()

# -----------------------------------------------------------------
# Python Uses both Call-by-Value and Call-by-Reference
# However Python uses automatically call-by-value for all simple variable 
# types like interger, string, float, etc. For more Complex data types like
# lists and stuff Python uses Call-by-reference.
# -----------------------------------------------------------------
print("Here are your 2 Points Added: ")
point1.add(point2)
point1.draw3()

print("------------------------------------------------------")
print("Here is your First Number + 10, By Call-by-Value:")
callByValueResult(Number)
print(Number)

print("------------------------------------------------------")
print("Here is your First Number + 10, By Call-by-Value-Result:")
Number = callByValueResult(Number)
print(Number)

print("------------------------------------------------------")
print("Here is a list of all your Numbers:")
Nums = [Number, Number2, Number3, Number4, Number5]
print(Nums)

print("------------------------------------------------------")
print("Here is your List after Call-by-Reference:")
callByReference(Nums)
print(Nums)