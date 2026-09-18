template <typename t>
double aprogressionterm(t a1, t d, int n) {
    if (n <= 0) return 0.0;
    return static_cast<double>(a1) + (n - 1) * static_cast<double>(d);
}
