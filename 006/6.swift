// The sum of the squares of the first ten natural numbers is,
// 1^2 + 2^2 + ... + 10^2 = 385
//
// The square of the sum of the first ten natural numbers is,
// (1 + 2 + ... + 10)^2 = 55^2 = 3025
//
// Hence the difference between the sum of the squares of the first ten 
// natural numbers and the square of the sum is 3025 − 385 = 2640.
//
// Find the difference between the sum of the squares of the first one
// hundred natural numbers and the square of the sum.

func sumOfSquares(number: Int) -> Int {
    var sum = 0
    for i in 1...number {
        sum += i * i
    }
    return sum
}

func squareOfSums(number: Int) -> Int {
    var sum = 0
    for i in 1...number {
        sum += i
    }
    return sum * sum
}

let range = 100
let difference = squareOfSums(range) - sumOfSquares(range)

println(difference)
