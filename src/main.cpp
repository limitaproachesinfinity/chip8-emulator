#include <iostream>
#include <cstdint>

struct CPU {
  uint8_t reg[16];
  uint16_t index;
  uint8_t stack[64];
  uint8_t sp;
  uint8_t dt, st;
  uint8_t framebuffer[8][4];
  uint16_t pc;
  uint8_t ram[4096];

  void init() {
    pc = 0x200;
  }
  
};

int main() {
  std::cout << sizeof(uint8_t) << " " << sizeof(uint16_t) << "\n";

  return 0;
}
