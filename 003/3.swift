// The prime factors of 13195 are 5, 7, 13 and 29.
//
// What is the largest prime factor of the number 600851475143?

extension Int {
    func isPrime() -> Bool {
        for i in 2 ..< self {
            if self % i == 0 {
                return false
            }
        }
        return true
    }
}

var num = 600851475143
var factors = [Int]()

while num >= 2 {
    for i in 2 ... num {
        if i.isPrime() && num % i == 0 {
            print("\(num) / \(i)")
            num /= i
            print("= \(num)")
            factors.append(i)
            break
        }
    }
}

print(factors)
