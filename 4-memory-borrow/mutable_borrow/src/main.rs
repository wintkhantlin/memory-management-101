fn change_name(name: &mut String) {
    *name = String::from("Happer");
}

fn main() {
    let mut name = String::from("Hello");

    change_name(&mut name);

    println!("{}", name)
}
