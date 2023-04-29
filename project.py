# Dylan Sarell
# 4/28/23
# Python File
import math
import point


def greetings():
    print("Hello World")
    print("Loacated at: ")


def coordinates(x, y):
    x = str(x)
    y = str(y)
    print(f"({x}, {y})")


# As You Can See Python Doesn't use or need the type of the Variable 
# when doing Declarations, while C++ needs you to state the Spefic Type.

# Automatically assumes the type is String.
Number = input("What is your Favoirte Number: ")
Number = int(Number)
Number2 = input("What is Your Other Favorite Number: ")
Number2 = int(Number2)


greetings()
point1 = point.Point(Number, Number2)
point1.draw2()

Number3 = input("What is your Number: ")
Number3 = int(Number3)
Number4 = input("What is Your Other Number: ")
Number4 = int(Number4)
Number5 = input("What is Your Other Other Number: ")
Number5 = int(Number5)

greetings()
point2 = point.Point(Number3, Number4, Number5)
point2.draw3()