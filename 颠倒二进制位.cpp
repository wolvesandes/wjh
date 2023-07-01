#include <iostream>
#include <bitset>

uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;

    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }

    return result;
}

int main() {
    std::string binaryStr;
    std::getline(std::cin, binaryStr);

    uint32_t n = std::bitset<32>(binaryStr).to_ulong();

    uint32_t reversed = reverseBits(n);

    std::cout << std::bitset<32>(reversed).to_string() << std::endl;

    return 0;
}
