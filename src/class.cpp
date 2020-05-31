// setup begin
class A
{};
class B
{};
// setup end


// BraceWrapping.AfterClass
// BreakBeforeInheritanceComma
// BreakInheritanceList
// SpaceBeforeInheritanceColon
class SomeClass
        : public A
        , public B
{
public:  // AccessModifierOffset
    SomeClass();

    // AlwaysBreakAfterReturnType
    int
    getData1();

protected:
    int   m_data1;
    float m_data2;
};

// AllowAllConstructorInitializersOnNextLine
// BreakConstructorInitializersBeforeComma
// BreakConstructorInitializers
// ConstructorInitializerAllOnOneLineOrOnePerLine
// ConstructorInitializerIndentWidth
// SpaceBeforeCtorInitializerColon
SomeClass::SomeClass()
        : m_data1( 0 )
        , m_data2( 2.0f )
{}

// AlwaysBreakAfterDefinitionReturnType
// AlwaysBreakAfterReturnType
int
SomeClass::getData1()
{
    return m_data1;
}
