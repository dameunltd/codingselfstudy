package main

import (
		"fmt" 
)	

/*
const (
	_ = iota // ignore first value by assigning blank identifier
	KB = 1 << (10 * iota)
	MB
	GB
	TB
	PB
	EB
	ZB
	YB
)
*/

const (
	isAdmin = 1 << iota
	isHeadquarters
	canSeeFinancials

	canSeeAfrica
	canSeeAsia
	canSeeEurope
	canSeeNorthAmerica
	canSeeSouthAmerica
)

func main() {
//	fileSize := 4000000000.
//	fmt.Printf("%.2fGB", fileSize/GB) // prints GB size 

	var roles byte = isAdmin | canSeeFinancials | canSeeEurope // setting roles of byte to specific constants. (Only one of the variables need to be true)
	fmt.Printf("%b\n", roles) // prints roles in byte format
	fmt.Printf("Is Admin? %v\n", isAdmin & roles == isAdmin) // prints if isAdmin is equal to itself and roles (is true) [Bitwise mathematics/Bitmap]
	fmt.Printf("Is HQ? %v", isHeadquarters & roles == isHeadquarters) // prints if isHeadquarters is equal to itself and roles(is false)[Bitwise mathematics/Bitmap]
}