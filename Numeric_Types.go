package main

import (
		"fmt" 
)	

func main() {
/*		a := 8 // 2^3
		fmt.Println(a <<3) // 2^3(8) multiplied by 2^3 = 2^6 = 64
		fmt.Println(a >>3) // 2^3(8) divided by 2^3 = 2^0 = 1
*/

/*
FLOATING POINT NUMBERS
*/
//		n := 3.14
// 		n = 13.7e72
 //		n = 2.1E14
//		fmt.Printf("%v, %T", n, n)

		var n complex128 = complex(5, 12) // function to create complex #
		fmt.Printf("%v, %T\n", n, n)
//		fmt.Printf("%v, %T\n", real(n), real(n)) // pull real parts of #
//		fmt.Printf("%v, %T\n", imag(n), imag(n)) // pull imaginary part #

/*		a := 1 + 2i
		b := 2 + 5.2i
		fmt.Println(a+b)
		fmt.Println(a-b)
		fmt.Println(a*b)
		fmt.Println(a/b)
*/
}