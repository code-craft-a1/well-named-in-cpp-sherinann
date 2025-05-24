#include "ColorPair.h"
#include <string>

namespace TelCoColorCoder
{
    namespace
    {
        const char *majorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
        int numberOfMajorColors = sizeof(majorColorNames) / sizeof(majorColorNames[0]);
        const char *minorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
        int numberOfMinorColors = sizeof(minorColorNames) / sizeof(minorColorNames[0]);
    }

    ColorPair ColorPair::FromPairNumber(int pairNumber)
    {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    int ColorPair::GetNumberOfColorPairs()
    {
        return numberOfMajorColors * numberOfMinorColors;
    }

    int ColorPair::ToPairNumber(MajorColor major, MinorColor minor)
    {
        return major * numberOfMinorColors + minor + 1;
    }

    MajorColor ColorPair::GetMajor()
    {
        return majorColor;
    }

    MinorColor ColorPair::GetMinor()
    {
        return minorColor;
    }

    std::string ColorPair::ToString()
    {
        std::string colorPairStr = majorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += minorColorNames[minorColor];
        return colorPairStr;
    }
}