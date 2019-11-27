package main

import (
		"fmt" 
)	

func main() {
	a := []int{1,2,3,4,5}
	b := a[1:] //shift operation (create new slice starting at index 1)
	c := a[:len(a)-1] // creates new slice of all elements index 4)
	d := append(a[:2], a[3:]...) // creates new slice with first 2 elements, skips 3rd element, then prints remaining elements 
	fmt.Println(b)
	fmt.Println(c)
	fmt.Println(d)
	fmt.Println(a)
}