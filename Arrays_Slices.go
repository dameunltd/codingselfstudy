package main

import (
		"fmt" 
)	

func main() {
//	grades := [...]int{97, 85, 83} // declares array [amount of data held]varType{values}
	
//	fmt.Printf("Grades: %v", grades) // prints grades array

	var students [3]string // string array named students
	fmt.Printf("Students: %v\n", students)
	students[0] = "Lisa" // sets first element of array to "Lisa"
	students[1] = "Dame"
	students[2] = "Arnold"
// 	fmt.Printf("Students: %v", students)
	fmt.Printf("Student #1: %v\n", students[1]) // [] <-- used to pull only data from 2 second element of array (which = Dame)
	fmt.Printf("Number of Students: %v\n", len(students)) //prints length of array specificed in -->()
}