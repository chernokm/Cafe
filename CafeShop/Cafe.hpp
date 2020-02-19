class Register
{
    public:
    Register();
    ~Register();
    void Welcome();
    void Order();
    void Calculate();
    int coffeeAmount = 0;
    int teaAmount = 0;
    int sandwhichAmount = 0;
    int burgerAmount = 0;
    int option;
    double coffeeTotal = 0;
    double teaTotal = 0;
    double sandwhichTotal = 0;
    double burgerTotal = 0;
    double overallTotal = 0;
};