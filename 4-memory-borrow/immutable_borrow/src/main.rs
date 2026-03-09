fn print_integer(num: &i32) {
    println!("Printing Number: {}", &num)
}

fn main() {
    let y = 5;
    let r1 = &y;
    let r2 = &y;

    print_integer(&y);
    print_integer(&r1);
    print_integer(&r2);

    // let r3 = &mut y;
    // cannot borrow `y` as mutable while immutable references exist
}
