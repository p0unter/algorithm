int mySqrt(int x) {
    if (x == 0 || x == 1) return x;

    long long sqrtCore = x / 2;

    for (int i = 0; i < 20; i++) {
        sqrtCore = (sqrtCore + x / sqrtCore) / 2;
    }

    if (sqrtCore * sqrtCore > x) {
        sqrtCore--;
    }

    return (int)sqrtCore;
}
