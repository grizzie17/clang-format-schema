#ifndef H_CLASSTEST
#define H_CLASSTEST


#define M_ONE   1
#define M_TWO   2
#define M_THREE 3

#define interface_ struct

// one .. blah blah blah blah blah blah blah blah blah
// two .. blah blah blah blah blah blah blah blah blah
// three ..  blah blah blah blah blah blah blah blah blah


namespace Test {

enum counter
{
    ONE,
    TWO,
    THREE
};

class CRoot
{
public:
    CRoot();
    virtual ~CRoot();

    void rootFunction();

    virtual void purVirtFunc() = 0;
};

struct IMix
{
    virtual int doAThing() = 0;
};

class CMiddle : CRoot
{
public:
    CMiddle();
    virtual ~CMiddle();

    void middleFunction();
};

class CTest
        : CMiddle
        , IMix
{
public:
    CTest();
    CTest( int a, int b, int c );
    virtual ~CTest();

    int doSomething(    ///@returns: a value
            int a,      ///< in: some arg description
            int b       ///< in: another arg
    );

protected:
    int m_a;
    int m_b;
    int m_c;
};


}    // namespace Test


#endif    // H_CLASSTEST
