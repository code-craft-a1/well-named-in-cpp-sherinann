#include <iostream>
#include "ReferenceManual.h"
#include "ColorPair.h"

namespace TelCoColorCoder
{

    ReferenceManual::ReferenceManual()
    {
        int noOfPairs = TelCoColorCoder::ColorPair::GetNumberOfColorPairs();
        for (int i = 0; i < noOfPairs; i++)
        {
            colorPairList.push_back(TelCoColorCoder::ColorPair::FromPairNumber(i + 1));
        }
    }

    void ReferenceManual::PrintReferenceManual()
    {
        for (ColorPair& colorPair : colorPairList)
        {
            std::cout << colorPair.ToString() << std::endl;
        }
    }

}