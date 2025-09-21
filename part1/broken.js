function calculateSum(arr) {
    let total = o;           // <-- ReferenceError at runtime
    for (let num of arr) {
        total += num;
    }
    return total;
}
let numbers = [1, 2, 3, 4, 5];
let result = calculate Sum (numbers); // <-- SyntaxError: unexpected identifier (space inside identifier)
console.log("Sum in JavaScript:", result);
