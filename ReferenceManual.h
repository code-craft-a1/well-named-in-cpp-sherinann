#pragma once
#include "ColorPair.h"
#include <vector>

namespace TelCoColorCoder
{

    class ReferenceManual
    {
    public:
        ReferenceManual();
        void PrintReferenceManual();
        
    private:
        std::vector<TelCoColorCoder::ColorPair> colorPairList;
    };

}