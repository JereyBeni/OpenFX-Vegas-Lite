// OpenFX-Vegas-Lite - Lightweight memory helpers
// Designed for 1GB RAM systems - avoid large allocations

#ifndef OFX_VEGAS_LITE_MEMORY_H
#define OFX_VEGAS_LITE_MEMORY_H

#include <stdlib.h>
#include <string.h>

// Simple aligned alloc for older Windows
inline void* LiteAlloc(size_t size) {
    return malloc(size);
}

inline void LiteFree(void* ptr) {
    if (ptr) free(ptr);
}

// Reusable scanline buffer (avoid realloc every frame)
struct ScanlineBuffer {
    unsigned char* data;
    size_t capacity;

    ScanlineBuffer() : data(0), capacity(0) {}

    ~ScanlineBuffer() {
        LiteFree(data);
    }

    bool Ensure(size_t needed) {
        if (needed <= capacity) return true;
        LiteFree(data);
        data = (unsigned char*)LiteAlloc(needed);
        if (!data) {
            capacity = 0;
            return false;
        }
        capacity = needed;
        return true;
    }
};

#endif