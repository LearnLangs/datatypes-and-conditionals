/*
    Data Types in JS
    ================
    Data types in JavaScripts can be divide into two main parts. thus; into Primitives, and Objects

    Primitive data types are the most basic, built-in data types in a programming language, representing simple, 
    immutable values directly in memory. They are not objects, have no methods, 
    and are the foundational building blocks for complex data structures. 
    Examples include integers, booleans, floating-point numbers, and characters

        Numeric Type:
        Just like any other language, JS have numeric data type and non numeric data, the numeric data type is made up of:
            1.  Number -: This can be a negative or positive number incuding ints, floats, and doubles
            2.  BigInt -: This bigint is one of the numeric data type that is greater than the normal integers
            
        Non-Numeric Type:
        The non numeric data types is made up of all primitive data types that are not numeric. like booleans, strings, and so on
            1.  String -: This is either a single char or a word enclosed in a qoutation mark
            2.  Boolean -: This is either True or False.
            3.  Undefined -: This is the other form of primitive data type that has no value. just like None
            4.  Null -: This is a primitive data type that signify no object found.
            5.  Symbol -: In JavaScript, a Symbol is a primitive data type introduced in ECMAScript 6 (ES6) that represents a unique,
                immutable identifier. Symbols are created using the Symbol() function 
                and are primarily used as keys for object properties to avoid naming conflicts


    The object type is a single, non-primitive data type in JavaScript, but it encompasses several specific built-in types. 
    Objects are mutable (their values can be changed after creation) and are compared by reference, not by value

 
*/

// Numbers
let A = 123456782345678345678456785678678788 // all numbers are stored in tthe computer memory as real numbers or floats, thus have the decimal point 
console.log(typeof(A)) // should output Number

let B = BigInt(123456782345678345678456785678678788) 
console.log(typeof(B)) // should output Bigint

// Non-Numeric
// String
let C = "Cat"
console.log(typeof(C)) // should output string

let D = true 
console.log(typeof(D)) // should output Boolean

let E
console.log(typeof(E)) // should output undefined

let F = null
console.log(typeof(F)) // should output object

let G = Symbol("Just trying")
console.log(typeof(G)) // should output symbol

// Objects
// Remember ojects  have key - value pairs just like dict
const H = {
    "name":"Davisone",
    "age": 20,
    "IQ": 100,
    "Loyal": true
} 
console.log(typeof(H)) // should output object
