#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab62ut
{
	TEST_CLASS(lab62ut)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            int a[4] = { 1, 2, 3, 4 };
            SwapHalves(a, 2);
            Assert::AreEqual(a[0], 3);

        }

        TEST_METHOD(TestMethod2) 
        {
            int a[6] = { 1, 2, 3, 4, 5, 6 }; 
            SwapHalves(a, 3); 
            Assert::AreEqual(a[0], 4); 
            
        }
	};
}
