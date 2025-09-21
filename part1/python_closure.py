def make_adder(x):
    def adder(y):
        return x + y   # adder closes over x (closure)
    return adder
add5 = make_adder(5)
print(add5(3))  # prints 8
