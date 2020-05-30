
#include "classtest.h"

namespace Test {

const char sSample[]
        = "This is a sample string "
          "that spans more than one "
          "source line.";

template <typename T>
T
        foo( T a, T b )
{
    return a < b ? b : a;
}


CTest::CTest()
        : m_a( 0 )
        , m_b( 0 )
        , m_c( 0 )
{}

CTest::CTest( int a, int b, int c )
        : m_a( a )
        , m_b( b )
        , m_c( c )
{}

CTest::~CTest()
{
    int aaaaaaaaaaaaaaaaaaaaaaaaa = 1;
    int bbbbbbbbbbbbbbbbbbbbbbbbb = 2;
    int m_a = 0;
    m_b = 0;
    m_c = 0;
}


int
        CTest::doSomething( int a, int b )
{
    int aaaaaaaaaaaaaaaaaaaaaaaaa = 1;
    int bbbbbbbbbbbbbbbbbbbbbbbbb = 2;
    int ccccccccccccccccccccccccc = 3;
    m_a = a;
    m_b = b;
    m_c = aaaaaaaaaaaaaaaaaaaaaaaaa + bbbbbbbbbbbbbbbbbbbbbbbbb;

    if ( 0 < aaaaaaaaaaaaaaaaaaaaaaaaa && aaaaaaaaaaaaaaaaaaaaaaaaa < 10
            && aaaaaaaaaaaaaaaaaaaaaaaaa < bbbbbbbbbbbbbbbbbbbbbbbbb )
    {
        switch ( m_a )
        {
        case 1:
        case 2:
        case 3:
        default:
            break;
        }
    }
    else
    {
        m_a = 23;
    }


    return m_c;
}


}    // namespace Test