#ifndef __GLOBAL_HEADER__
#define __GLOBAL_HEADER__

#include "pluginterfaces/base/fplatform.h"
#include "pluginterfaces/base/funknown.h"

using namespace Steinberg;

namespace Igorski {
namespace VST {

    static const int   ID       = 12345678;
    static const char* NAME     = "AudioTunnel";
    static const char* VENDOR   = "Angelo Qin";

    // generate unique UIDs for these (www.uuidgenerator.net is great for this)

    static const FUID PluginProcessorUID( 0x42345f86, 0x8c074d54, 0xb3dd9f8c, 0x0f859671 );
    static const FUID PluginWithSideChainProcessorUID( 0x2544476b, 0x78214fee, 0x9b145fc0, 0xd4bedd6f );
    static const FUID PluginControllerUID( 0xe5ee0ad2, 0xd35b4018, 0x84844ee0, 0x087f38fb );

    extern float SAMPLE_RATE; // set upon initialization, see vst.cpp

    static const float PI     = 3.141592653589793f;
    static const float TWO_PI = PI * 2.f;

    // maximum and minimum rate of oscillation in Hz
    // also see plugin.uidesc to update the controls to match

    static const float MAX_LFO_RATE() { return 10.f; }
    static const float MIN_LFO_RATE() { return .1f; }

    // sine waveform used for the oscillator
    static const float TABLE[ 128 ] = { 0, 0.0490677, 0.0980171, 0.14673, 0.19509, 0.24298, 0.290285, 0.33689, 0.382683, 0.427555, 0.471397, 0.514103, 0.55557, 0.595699, 0.634393, 0.671559, 0.707107, 0.740951, 0.77301, 0.803208, 0.83147, 0.857729, 0.881921, 0.903989, 0.92388, 0.941544, 0.95694, 0.970031, 0.980785, 0.989177, 0.995185, 0.998795, 1, 0.998795, 0.995185, 0.989177, 0.980785, 0.970031, 0.95694, 0.941544, 0.92388, 0.903989, 0.881921, 0.857729, 0.83147, 0.803208, 0.77301, 0.740951, 0.707107, 0.671559, 0.634393, 0.595699, 0.55557, 0.514103, 0.471397, 0.427555, 0.382683, 0.33689, 0.290285, 0.24298, 0.19509, 0.14673, 0.0980171, 0.0490677, 1.22465e-16, -0.0490677, -0.0980171, -0.14673, -0.19509, -0.24298, -0.290285, -0.33689, -0.382683, -0.427555, -0.471397, -0.514103, -0.55557, -0.595699, -0.634393, -0.671559, -0.707107, -0.740951, -0.77301, -0.803208, -0.83147, -0.857729, -0.881921, -0.903989, -0.92388, -0.941544, -0.95694, -0.970031, -0.980785, -0.989177, -0.995185, -0.998795, -1, -0.998795, -0.995185, -0.989177, -0.980785, -0.970031, -0.95694, -0.941544, -0.92388, -0.903989, -0.881921, -0.857729, -0.83147, -0.803208, -0.77301, -0.740951, -0.707107, -0.671559, -0.634393, -0.595699, -0.55557, -0.514103, -0.471397, -0.427555, -0.382683, -0.33689, -0.290285, -0.24298, -0.19509, -0.14673, -0.0980171, -0.0490677 };
}
}

#endif
