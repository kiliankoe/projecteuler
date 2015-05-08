import Foundation

infix operator ** { }
func ** (base: Int, exponent: Int) -> Int {
	return Int(pow(Double(base), Double(exponent)))
}

func powerSum(exponent: Int) -> Int {
//	let power = String(base**exponent)
//	let power = String(stringInterpolationSegment: pow(Double(base), Double(exponent)))
	let power = String(2 << (exponent - 1))

	// Iterate over the single digits of the string
	var sum = 0
	for number in power {
		sum += String(number).toInt()!
	}
	return sum
}

powerSum(62)
