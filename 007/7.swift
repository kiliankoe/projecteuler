// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can
// see that the 6th prime is 13.
//
// What is the 10001st prime number?

let range = 122500 // Guessing how far to go doesn't feel right
let sqrt = 350 // Someone please tell me how to use Swift's sqrt()

var kicked = Array<Bool>(count: range, repeatedValue: false)
var primes = [1]

for i in 2...sqrt {
    if !kicked[i] {
        primes.append(i)
        for var j = i * i; j < range; j+=i {
            kicked[j] = true
        }
    }
}

for i in (sqrt + 1)..<range {
    if !kicked[i] {
        primes.append(i)
    }
}

println(primes[10001])
