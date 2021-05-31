int vendor_fibonacci(int n){
    if(n <= 1){
        return 1;
    } else {
        return vendor_fibonacci(n-1) + vendor_fibonacci(n-2);
    }
}