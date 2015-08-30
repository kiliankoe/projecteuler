(defn sum-multiples
  "Sum up two numbers as long as the second one is divisible by 3 or 5."
  [num1 num2]
  (if (or (= (mod num2 3) 0)
          (= (mod num2 5) 0))
    (+ num1 num2)
    num1))

(println (reduce sum-multiples (range 1000)))
