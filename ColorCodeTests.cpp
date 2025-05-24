#include <iostream>
#include <assert.h>
#include "ColorPair.h"

namespace TelCoColorCoder
{
    void TestNumberToPair(int pairNumber,
                          TelCoColorCoder::MajorColor expectedMajor,
                          TelCoColorCoder::MinorColor expectedMinor)
    {
        TelCoColorCoder::ColorPair colorPair =
            ColorPair::FromPairNumber(pairNumber);
        std::cout << "Got pair " << colorPair.ToString() << std::endl;
        assert(colorPair.GetMajor() == expectedMajor);
        assert(colorPair.GetMinor() == expectedMinor);
    }

    void TestPairToNumber(
        TelCoColorCoder::MajorColor major,
        TelCoColorCoder::MinorColor minor,
        int expectedPairNumber)
    {
        int pairNumber = ColorPair::ToPairNumber(major, minor);
        std::cout << "Got pair number " << pairNumber << std::endl;
        assert(pairNumber == expectedPairNumber);
    }
}
