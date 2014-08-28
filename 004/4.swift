// A palindromic number reads the same both ways. The largest palindrome made
// from the product of two 2-digit numbers is 9009 = 91 × 99.
//
// Find the largest palindrome made from the product of two 3-digit numbers.

func isPalindrome(number: Int) -> Bool {
    var rev = 0
    var num = number

    while num != 0 {
        rev = rev * 10 + num % 10
        num = num / 10
    }

    if rev == number {
        return true
    }
    return false
}

let range = 999
var palindromes = [Int]()

for var a = range; a > 0; a-- {
    for var b = range; b > 0; b-- {
        if isPalindrome(a * b) {
            palindromes.append(a * b)
        }
    }
}

var biggest = 0
for i in palindromes {
    if i > biggest {
        biggest = i
    }
}

println(biggest)
