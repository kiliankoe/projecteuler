// 2520 is the smallest number that can be divided by each of the numbers
// from 1 to 10 without any remainder.
//
// What is the smallest positive number that is evenly divisible by all of
// the numbers from 1 to 20?

let range = 20
var primefactors = [Int: Int]()

// Find all the prime factors and the amount of their occurrences of a given
// number and return a dictionary. Also includes multiples, 
// e.g. 18 -> [2: 1, 3: 2]
func findAllFactors (var number: Int) -> [Int: Int] {
    var factors = [Int: Int]()
    for var i = 2; i <= number; i++ {
        if number % i == 0 {
            if var factor = factors[i] {
                factor++
                factors[i] = factor
            } else {
                factors[i] = 1
            }
            number /= i
            i = 1
        }
    }
    return factors
}

// Loop through all numbers between 2 and the range and add all their
// prime factors to a dictionary.
for var i = 2; i <= range; i++ {
    var factors = findAllFactors(i)
    // walk through all the factors for the current number
    for (factor, amount) in factors {
        if var currentAmount = primefactors[factor] {
            // check to see if the current amount is lower than
            // what we're trying to add
            if currentAmount < amount {
                currentAmount = amount
                primefactors[factor] = currentAmount
            } else {
                // current factor already exists in primeFactors in an
                // amount equal or larger to what current factor states
            }
        } else {
            // if it doesn't exist yet, add it
            primefactors[factor] = amount
        }
    }
}

// Multiply all these primes together by their given amount.
var number = 1
for (prime, amount) in primefactors {
    for var i = 0; i < amount; i++ {
        number *= prime
    }
}

println(number)
