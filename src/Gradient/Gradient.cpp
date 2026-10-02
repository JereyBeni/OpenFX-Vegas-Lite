// OpenFX-Vegas-Lite - Gradient Plugin
// Ultra lightweight version for Windows XP - 11 / 1GB+ RAM
// Pure C++ compatible with old compilers (VS2010+)

#include "ofxCore.h"
#include "ofxImageEffect.h"
#include "ofxParam.h"

// Simple linear gradient for now
// TODO: Add radial, noise anti-banding, start/end colors, angle

extern "C" {

// Plugin factory and describe will go here
// This is a placeholder skeleton

OfxStatus GradientDescribe(OfxImageEffectHandle effect) {
    // TODO: implement
    return kOfxStatOK;
}

OfxStatus GradientDescribeInContext(OfxImageEffectHandle effect, OfxImageEffectContext context) {
    // TODO: add parameters (StartColor, EndColor, Angle, Softness, etc.)
    return kOfxStatOK;
}

OfxStatus GradientRender(OfxImageEffectHandle effect, OfxPropertySetHandle inArgs) {
    // TODO: scanline gradient rendering with minimal memory
    return kOfxStatOK;
}

} // extern "C"

// Entry points will be added when we link the full Support layer or raw OFX