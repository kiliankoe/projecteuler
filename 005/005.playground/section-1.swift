// 2520 is the smallest number that can be divided by each of the numbers
// from 1 to 10 without any remainder.
//
// What is the smallest positive number that is evenly divisible by all of
// the numbers from 1 to 20?

let range = 20
var primefactors = [Int: Int]()

func findAllFactors (number: Int) -> [Int] {
    var factors = [Int]()
    var num = number
    for var i = 2; i <= number; i++ {
        if num % i == 0 {
            factors.append(i)
            num /= i
            i = 2
        }
    }
    return factors
}

for var i = 2; i <= range; i++ {
    var factors = findAllFactors(i)
    for factor in factors {
        if (primefactors[factor] != nil) {
            primefactors[factor] = primefactors[factor]! + 1
        } else {
            primefactors[factor] = 1
        }
    }
}

println(primefactors)

//var primefactors = [2,3,5,7,2,2,3,11,13,2,17,19]

var number = 1

//for prime in primefactors {
//    number *= prime
//}

println(number)
