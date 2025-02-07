use std::io;

fn main(){
    const PI: f64 = 3.14159;
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let raio: f64 = input.trim().parse().unwrap();

    println!("A={:.4}", PI * raio * raio);
}