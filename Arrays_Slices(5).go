package main

import (
		"fmt" 
)	

func main() {
/*	a := make([]int, 3) // make([slice]varType, length of slice) | everything set to 0 value
	a := make([]int, 3, 100) // set length to 3 elements but capacity to 100 elements(NOTE: slices do not have to have a fixed size)
	fmt.Println(a)
	fmt.Printf("Length: %v\n", len(a))
	fmt.Printf("Capacity: %v\n", cap(a))
*/

	a := []int{}
	fmt.Println(a)
	fmt.Printf("Length: %v\n", len(a))
	fmt.Printf("Capacity: %v\n", cap(a))
	a = append(a, 1) // add value 1 into array
	fmt.Println(a)
	fmt.Printf("Length: %v\n", len(a))
	fmt.Printf("Capacity: %v\n", cap(a))
	a = append(a, []int{2,3,4,5}...) // '...' operator spreads out elements
	fmt.Println(a)
	fmt.Printf("Length: %v\n", len(a))
	fmt.Printf("Capacity: %v\n", cap(a))
}