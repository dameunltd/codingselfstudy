package main

import (
		"fmt" 
)	

const (
	a = iota
	b 
	c
)

const (
	a2 = iota
)
func main() {
//	const myConst int = 42
//	fmt.Printf("%v, %T", myConst, myConst)

//	const a = 42
//	var b int16 = 27
	fmt.Printf("%v\n", a)
	fmt.Printf("%v\n", b)
	fmt.Printf("%v\n", c)
	fmt.Printf("%v\n", a2)

}