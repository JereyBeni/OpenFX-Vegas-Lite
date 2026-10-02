# OpenFX-Vegas-Lite

**Ultra-lightweight OpenFX plugins that recreate classic VEGAS Pro effects.**

- Runs on **1 GB RAM** machines
- Compatible with **Windows XP → Windows 11** (32-bit & 64-bit)
- Pure C/C++ (no modern frameworks, no heavy dependencies)
- Designed for old hardware (DDR3, low-end CPUs)

## Target Hosts
- VEGAS Pro (all versions that support OFX)
- Shotcut (with OFX support)
- Natron
- DaVinci Resolve
- Any other OpenFX host

## Planned Effects (priority order)
1. **Gradient** (Linear + Radial + anti-banding noise) ← first
2. Channel Blend
3. Picture in Picture
4. Soft Glow / Glow
5. Color Correct / Levels
6. Film Grain / Noise
7. Mirror / Flip
8. Crop / Letterbox
9. Simple Blur
10. Invert / Threshold

## Design Goals
- Minimal memory footprint
- Static linking preferred
- 32-bit builds prioritized for XP compatibility
- CPU-only first (no required GPU)
- Scanline processing, reusable buffers

## Building
Coming soon. Will support:
- Visual Studio 2010 (for XP)
- Visual Studio 2019/2022
- MinGW

## License
MIT

---
Created for low-spec machines and nostalgia. Let's keep old PCs useful 🔥