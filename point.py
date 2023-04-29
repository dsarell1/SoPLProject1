# Dylan Sarell
# 4/28/23
# Point Class 


# Python can really only have 1 constructor in it's classes.
# but it takes the amount of arguments and can make it 2 different objects.

class Point:
    # Constructor has both 2-Dimensional and 3-Dimensional 
    # "Constructors" Depends on Amount of Agruments
    def __init__(self, *args):
        if len(args) == 2:
            self.x = args[0]
            self.y = args[1]
            self.z = 0
        
        elif len(args) == 3:
            self.x = args[0]
            self.y = args[1]
            self.z = args[2]
    
    def move(self):
        print("Move")

    def add(self, rhs):
        self.x = int(self.x) + int(rhs.x)
        self.y = int(self.y) + int(rhs.y)
        self.z = int(self.z) + int(rhs.z)

    def draw2(self):
        self.x = str(self.x)
        self.y = str(self.y)
        print(f"({self.x}, {self.y})")
    
    def draw3(self):
        self.x = str(self.x)
        self.y = str(self.y)
        self.z = str(self.z)
        print(f"({self.x}, {self.y}, {self.z})")