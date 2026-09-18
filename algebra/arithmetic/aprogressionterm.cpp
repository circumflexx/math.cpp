template <typename T>
auto aprogressionterm1(T a1, T d, int n) {
    if (n <= 0) return 0.0;
    return static_cast<double>(a1) + (n - 1) * static_cast<double>(d);
}

template <typename T>
auto aprogressionterm2(T a1, T a2, int n) {
    if (n <= 0) return 0.0;
    double d = static_cast<double>(a2) - static_cast<double>(a1);
    return static_cast<double>(a1) + (n - 1) * d;
}
