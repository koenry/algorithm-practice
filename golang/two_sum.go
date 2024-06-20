package main
import (
    "fmt"

)

func get_two_sum(nums []int, target int) (int, int) {


	for i:=0; i < len(nums); i++ {
		for x:=i; x < len(nums)-1; x++ {
			if nums[i] + nums[x+1] == target {
				return i, x+1
			}
		}
	}
	return -1, -1
}


func main() {
	var nums = []int{3, 2, 4}
	var target int = 6
	fmt.Println(get_two_sum(nums, target))
}
