auto factorial(unsigned n) {
    double r = 1.0;
    for (unsigned i = 2; i <= n; ++i) {
        r *= i;
    }
    return r;
}
