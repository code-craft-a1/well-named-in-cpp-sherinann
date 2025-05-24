#include <iostream>
#include "ColorCodeTests.h"
#include "ColorPair.h"
#include "ReferenceManual.h"

int main()
{
    TelCoColorCoder::TestNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    TelCoColorCoder::TestNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    TelCoColorCoder::TestPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    TelCoColorCoder::TestPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    TelCoColorCoder::ReferenceManual  referenceManual;
    referenceManual.PrintReferenceManual();

    return 0;
}