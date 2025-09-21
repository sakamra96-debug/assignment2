function makeAdder(x) {
    return function(y) {
        return x + y; // closure captures x (lexical scoping)
    };
}
const add5 = makeAdder(5);
console.log(add5(3)); // 8
