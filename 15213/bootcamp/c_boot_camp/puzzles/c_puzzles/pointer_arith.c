/* TODO: Implement these macros as specified.  In all cases, you may NOT 
 * assume anything about the ptr type passed to the macro (it may be a char*, an int*, 
 * a void**, etc) */

// given an address, get the value stored at that byte 
#define GET_BYTE(p) ((void)p)

// given an address, get the value stored at word (4 bytes)
#define GET_WORD(p) ((void)p)

// given an address and a value, write a 1-byte value at that address
#define PUT_BYTE(p, v) ((void)p; (void)v)

// given an address and a value, write a 4-byte value at that address
#define PUT_WORD(p, v) ((void)p; void(v))

// given an address, get the address of the next byte
#define GET_NEXT_BYTE_ADDR(p) ((void)p)

// given an address, get the value stored in the next byte
#define GET_NEXT_BYTE_VAL(p) ((void)p

// given an address, write a value to the next byte
#define PUT_NEXT_BYTE_VAL(p, v) ((void)p; (void)v)

int main() { 
    /* TODO: write test cases to ensure that your implementation works correctly
     * A good test may simply create an array of bytes, assign the elements some 
     * values and access the elemnets using the macros you've defined */
    return 0;  
}
