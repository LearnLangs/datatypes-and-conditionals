
//go:build compare


package main
// pseudo code;
/*
	compare X and Y:
		if X is greater than Y:
			print X is greater than Y
		else if Y is greater tha X:
			print Y is greater than X
		else:
			print they are equal
*/

import "fmt"

func main() {
	var X int = 10
	var Y int = 20

	if X > Y {
		fmt.Println("X is greater than Y")
	} else if X < Y {
		fmt.Println("Y is greater than X")
	} else {
		fmt.Println("They are equal")
	}
}
