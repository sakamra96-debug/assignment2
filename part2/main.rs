fn main() {
    let s1 = String::from("Hello"); // s1 owns the String
    let s2 = s1;                     // ownership moves to s2
     println!("{}", s1);           // ERROR: s1 no longer valid
    // let s3 = &s2;                    // immutable borrow
    //println!("Borrowed value: {}", s3);
}
