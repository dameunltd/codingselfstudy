package main

import (
		"fmt" 
)	

const (
	_ = iota + 5 // 0(initial value) + 5 = 5
	catSpecialist // this var now equals 6 instead of 1
	dogSpecialist
	snakeSpecialist
)

func main() {

//	var specialistType int
	fmt.Printf("%v\n", catSpecialist)

}