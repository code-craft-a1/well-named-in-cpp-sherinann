#pragma once

#include <string>

namespace TelCoColorCoder
{
    enum MajorColor
    {
        WHITE,
        RED,
        BLACK,
        YELLOW,
        VIOLET
    };

    enum MinorColor
    {
        BLUE,
        ORANGE,
        GREEN,
        BROWN,
        SLATE
    };

    class ColorPair
    {
    public:
        static ColorPair FromPairNumber(int pairNumber);
        static int ToPairNumber(MajorColor major, MinorColor minor);
        static int GetNumberOfColorPairs();

        MajorColor GetMajor();
        MinorColor GetMinor();
        std::string ToString();
    
    private:
        ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor){};

        MajorColor majorColor;
        MinorColor minorColor;
    };
}