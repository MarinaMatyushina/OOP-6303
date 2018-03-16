class A
{
public:
      A() {};
private:
  A(A&) {};
private:
    void operator=(const A&) {}
};
