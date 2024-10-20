#include <ctime>
namespace random {
    int seed32 = time(0);
    long long seed64 = time(0);
    short seed16 = time(0);

    int GetRandom32() {
        seed32 = (1103515245 * seed32 + 123456789) % 2147483648;
        return seed32;
    }
    int GetRandom32(int seed32) {
        seed32 = (1103515245 * seed32 + 123456789) % 2147483648;
        return seed32;
    }
    //============================================================
    unsigned int GetRandomU32() {
        seed32 = (1103515245U * seed32 + 123456789) % 2147483648U;
        return seed32;
    }
    unsigned int GetRandomU32(unsigned int seed32) {
        seed32 = (1103515245U * seed32 + 123456789) % 2147483648U;
        return seed32;
    }
    //============================================================
    long long GetRandom64() {
        seed64 = (6364136223846793005LL * seed64 + 1LL) % 9223372036854775808LL;
        long long out = seed64;
        return out;
    }
    long long GetRandom64(long long seed64) {
        seed64 = (6364136223846793005LL * seed64 + 1LL) % 9223372036854775808LL;
        return seed64;
    }
    //============================================================
    unsigned long long GetRandomU64() {
        seed64 = (6364136223846793005ULL * seed64 + 1ULL) % 9223372036854775808ULL;
        unsigned long long out = seed64;
        return out;
    }
    unsigned long long GetRandomU64(unsigned long long seed64) {
        seed64 = (6364136223846793005ULL * seed64 + 1ULL) % 9223372036854775808ULL;
        return seed64;
    }
    //============================================================
    short int GetRandom16() {
        seed16 = (2435354524564576455 * seed16 + 1) % 5496532646453232546;
        short int out = seed16;
        return out;
    }
    short int GetRandomS16(short int seed16) {
        seed16 = (2435354524564576455 * seed16 + 1) % 5496532646453232546;
        return seed16;
    }
}
