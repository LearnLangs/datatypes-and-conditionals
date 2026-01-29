//go:build types

package main

/*
	Go basically have only three primitive data types, unlike other languages with lots of primitive data type.
	In Go, it is either your data is of type:
		1. Numeric -: this can be further divided into two main parts, thus:
			1. Int =: integers in Go is a bit different. you can have an int8 through to int64 and uint8 to uint64
				The signed integers (Int) can store both positive and negative figures and the number assigned or in front of the
				int signifies the number of bytes assigned to that particular variable hence int8 - takes values of 8 bytes

				the unsigned integers only store positive figures and follows the same signitories as the signed integers
			2. Floats =: just like integers in go, though floats are real numbers, it has from float 32 to float64

		2. Booleans -: this can be either true or false

		3. Strings -: this is a set of characters enclosed in a qoutation mark.

*/

import "fmt"

func main(){
	// numeric data
	var A int = 20;
	fmt.Printf("A is of type %T\n", A)

	var B float32 = 20.89;
	fmt.Printf("B is of type %T\n", B)

	var C bool = true;
	fmt.Printf("C is of type %T\n", C)

	var D string = "Davisone";
	fmt.Printf("D is of type %T\n", D)

}

/* 
	since we have both types and compare in one folder and the all have main func called, we have to use the 
	command `go run -tags filename filename.go` 
	only use this command when you have two files in one package. here filename is types
*/