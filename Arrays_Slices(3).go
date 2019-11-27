package main

import (
		"fmt" 
)	

func main() {
//	a := [...]int{1,2,3} // 'a' array set with 3 elements
//	b := a // 'a' redeclared as 'b'
//	b := &a // points directly to data in 'a' array. changes data of both
//	b[1] = 5 // Second element of 'a' array changed from 2 to 5
//	fmt.Println(a) // output = [1 2 3] or [1 5 3](see 'b := &a')
//	fmt.Println(b) // output = [1 5 3] or &[1 5 3](see 'b := &a')

a := []int{1,2,3,} // slice literal declared(NOTE: no [...] or [3] in slice)
b := a 
b[1] = 5 //(NOTE: changes data of both slices without need '&' in line 16)
fmt.Println(a)
fmt.Println(b)
fmt.Printf("Length: %v\n", len(a))
fmt.Printf("Capacity: %v\n", cap(a)) //prints capacity of slice(a)
}