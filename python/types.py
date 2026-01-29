"""
    Here i will explain the data types in python
        there are multiple data types in python but the main eight are;
        1. Numeric type:
            consider numerics in python to be either positive or negative numbers within any range.
            in other languages numerics are further divide into three, four or more thus:
                1. Integers -: A set of positive and negative whole numbers
                2. Floats -: A set of positive and negative decimal numbers
                3. Complex -: A set of positive and negtive complex numbers
        
        2. Text type:
            consider text types in python to be either a character or array of characters and it can be anything it just have to be rapped in a quotation mark
            in other languages texts are further divide into two thus:
                1. Char -: A single character rapped in quotation mark
                2. String -: A set or array of characters rapped in a quotation mark
                
        3. Boolean type:
            consider booleans to be either true of false. in python they have their first letter capitalized
            booleans can binary numbers as 0 denotes false and 1 denotes true in the binary system.
        
        4. Sequence type:
            there are several explanation that can be given to this data type. 
            thus the sequence type mainly keep data in the sequencial order.
            there are three sequence types in python which may vary in other languages
                1. List -: As the name denotes, it is a list or set of data which may include any of the three types above
                    list are kind of data that can be altered even after declaration. it is started with a square bracket and have it values separated by commas
                2. Turple -: Unlike lists, turples are not flexible in terms of altering it. once it is saved you can not change any of it values.
                    it is started with parenthesis and comma separating it values
                3. Range -: I would say this is a function in python that assigns a set of numbers mostly integers to a variable
                    in a sequencial order. ranges can be called using the it name and passing an integer as an argument.
        
        5. Mapping type:
            consider this data type to be just a key value pair of information stored in a variable.
            in other languages, its a bit complicated to get a dict. but in python, you can simple create a dict by calling the dict function
            or creating a variable and assigning either an empty curly bracies to it. a language like JS would consider it dicts mostly as objects.
            
        6. Set type:
            consider this type of the data as the normal set of infomation stored in a curly bracket, thus the set type does not have
            a key-value pair data, it is either saving a string or numbers, there are two types of set data type
                1. Set -: this is just the normal set you know, the one that contains only the values without keys
                2. Froven set -: to identify a froven set, it is a normal set that is further rapped in parenthesis
        
        7. Binary type:
            this kind of data type deals with things like images, files, and so on. the computer processes this as the binary numbers
            as a tweak of this images and files are made of either 0 and 1 or is in the hex form.
            we have:
                1. Bytes -: an immutable sequence of integers
                2. Bytearrays -: a mutable sequence of integers
                3. Memoryview -: this is a built in python function that allows you to access the memory allocation of an object
        8. None type:
            just nothing.
"""


# Numeric Type

A = 40 # int
B = 20.9 # float
C = 10j # complex 

print(type(A))
print(type(B))
print(type(C))

# Text Type

D = "Davisone"
E = 'E'  # both are strings but this one would be classified as a CHAR in C

print(type(D))
print(type(E))

# Boolean Type
F = False
T = True

print(type(F))
print(type(T))

""" In the case where booleans are either 0 or 1, is when it is returned in a class or function"""

# Sequence Type
G = ["Davisone", 20, True] # List
H = ("Davisone", 20, True) # Turple
I = range(10) # Range

print(type(G))
print(type(H))
print(type(I))

# Mapping Type
J = {"name":"Davisone",
     "age": 20,
     "IQ": 100,
     "Loyal": True} # Dictionary

print(type(J))

# Set Type
K = {"Kofi", "Ama", True, False} # Set
L = ({"Kofi", "Ama", True, False}) # Frozen set

print(type(K))
print(type(L))

# Binary Type
M = b"Davisone"  #Byte
N = bytearray(19) #Bytearray
O = memoryview(M) #Memoryview

print(type(M))
print(type(N))
print(type(O))