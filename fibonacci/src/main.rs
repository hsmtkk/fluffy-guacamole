use fibonacci_sys;

fn main() {
    unsafe {
        let n = fibonacci_sys::my_fibonacci(10);
        println!("answer {}", n);    
    }
}
