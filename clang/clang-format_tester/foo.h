
class Foo
{
public:
    Foo()  = default;
    ~Foo() = default;

    Foo(const Foo& foo) = delete;

protected:
private:
    void function();
    void function2() { return; }
    inline void function3() { return; }

    int var               = 0;
    unsigned long int uli = 0;
};
