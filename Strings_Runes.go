package main

import (
		"fmt" 
)	

func main() {
//		s := "This is a string"
//		s2 := "This is also a string"
//		fmt.Printf("%v, %T\n", s+s2, s+s2) // adding 2 strings together

/*
strings
*/
		s := "this is a string" // strings have double qoutes("")
		b := []byte(s)
		fmt.Printf("%v, %T\n", b, b)

		r := 'a' // rune only has single qoutes ('') & is true type alias int32
		fmt.Printf("%v, %T\n", r, r)
}