#pragma once

#include "ColorCodeTests.h"
#include "ColorPair.h"

namespace TelCoColorCoder
{
   void TestNumberToPair(int pairNumber,
                      TelCoColorCoder::MajorColor expectedMajor,
                      TelCoColorCoder::MinorColor expectedMinor);

    void TestPairToNumber(
        TelCoColorCoder::MajorColor major,
        TelCoColorCoder::MinorColor minor,
        int expectedPairNumber);

} 

