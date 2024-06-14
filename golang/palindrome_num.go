package main
import (
    "fmt"
    "strconv"
)


func check_palindrome(palindrome int) bool {

	var is_palindrome bool = true
	str := strconv.Itoa(palindrome)
	for i:=0; i < len(str) / 2; i++ {

		var back int = len(str) - i - 1
		if string(str[back]) != string(str[i]) {
			is_palindrome = false
		}

	}
	return is_palindrome
}


func main() {
	fmt.Println(check_palindrome(1221))
}
