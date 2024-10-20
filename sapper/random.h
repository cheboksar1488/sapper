#ifndef RANDOM_H
#define RANDOM_H
namespace random {
	int GetRandom32();
	unsigned int GetRandomU32();
	long long GetRandom64();
	unsigned long long GetRandomU64();
	int GetRandom32(int seed32);
	unsigned int GetRandomU32(unsigned int seed32);
	long long GetRandom64(long long seed64);
	unsigned long long GetRandomU64(unsigned long long seed64);
	short int GetRandom16();
	short int GetRandomS16(short int);
}
#endif