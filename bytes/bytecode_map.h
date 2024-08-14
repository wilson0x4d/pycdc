#include "bytecode.h"

#define BEGIN_MAP(maj, min) \
    int python_##maj##_##min##_map(unsigned char byte) \
    { \
        switch (byte) {

#define MAP_OP(byte, name) \
        case byte: return Pyc::name;

#define END_MAP() \
        default: return Pyc::PYC_INVALID_OPCODE; \
        } \
    }
