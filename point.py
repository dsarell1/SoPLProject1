# Dylan Sarell
# 4/28/23
# Point Class 

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

    def move(self):
        print("Move")

    def draw2(self):
        self.x = str(self.x)
        self.y = str(self.y)
        print(f"({self.x}, {self.y})")
    
    def draw3(self):
        self.x = str(self.x)
        self.y = str(self.y)
        self.z = str(self.z)
        print(f"({self.x}, {self.y}, {self.z})")