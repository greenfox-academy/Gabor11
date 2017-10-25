#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef union {
    //TODO: make a custom type from union and nested structs. this type should be 8 bit wide.
	//you should be able to assign values:
	// - each bits
	// - upper 3 bits and lower 5 bits
	// - the whole 8-bit memory

	struct {
	uint8_t _1st: 1;
	uint8_t _2nd: 1;
	uint8_t _3rd: 1;
	uint8_t _4th: 1;
	uint8_t _5th: 1;
	uint8_t _6th: 1;
	uint8_t _7th: 1;
	uint8_t _8th: 1;
	};

	struct {
	uint8_t _lower5: 5;
	uint8_t _upper3: 3;
	};

	struct {
	uint8_t _whole: 8;
	};


} my_memory;

int main()
{
    my_memory mem;
    mem._whole = 0b11100010;

    printf("The whole memory: %d\n", mem._whole);
    printf("The upper 3 bits: %d\n", mem._upper3);
    printf("The lower 5 bits: %d\n", mem._lower5);
    printf("The first bit: %d", mem._1st);

    return 0;
}
