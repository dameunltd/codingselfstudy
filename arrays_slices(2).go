package main

import (
		"fmt" 
)	

func main() {
//	var identityMatrix [3][3]int = [3][3]int{[3]int{1,0,0}, [3]int{0,1,0}, [3]int{0,0,1}}
//	fmt.Println(identityMatrix)

	var identityMatrix [3][3]int // identityMatrix array declared
	identityMatrix[0] = [3]int{1,0,0} // element 1 has array containing 3 elements
	identityMatrix[1] = [3]int{0,1,0} // element 2 has array containing 3 elements
	identityMatrix[2] = [3]int{0,0,1} // element 3 has array containing 3 elements
	fmt.Println(identityMatrix)
}