#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;


class  Complex
{
    float num_real;
    float num_com;

public:

    Complex(float real = 0, float complex = 0)
    {
        num_real = real;
        num_com = complex;
    }

    void modify_real_number(float real = 0)
    {
        num_real = real;
    }

    void modify_complex_number(float com = 0)
    {
        num_com = com;
    }

    void add_numbers(Complex b)
    {
        num_real = num_real + b.num_real;
        num_com =  num_com + b.num_com;

    }

    void print_data()
    {
        if(num_com != 0)
            cout << num_real << "," << num_com << "i" << endl;
        else
            cout << num_real << "," << num_com << endl;

    }


};

int main()
{
    Complex number1;
    Complex number2;
    bool x = true;
    int a, b, c;
    float d, e;



    while(x)
    {
        a = 0.0;
        b = 0.0;
        c = 0.0;
        d = 0.0;
        e = 0.0;

        cout << "Press 1 to initilize first complex number" << endl;
        cout << "Press 2 to initilize second complex number" << endl;
        cout << "Press 3 to modify complex number" << endl;
        cout << "Press 4 to add second complex number to first one" << endl;
        cout << "Press 5 to print first complex number" << endl;
        cout << "Press 0 to exit" << endl;

        cin >> a;

        switch(a)
        {
            case 0:
                x = !x;
            break;
            case 1:
            {
                cout << "provide real part:" << endl;
                cin >> d;

                cout << "provide complex part:" << endl;
                cin >> e;

                number1 = {d,e};
                break;
            }
            case 2:
            {
                cout << "provide real part:" << endl;
                cin >> d;

                cout << "provide complex part:" << endl;
                cin >> e;

                number2 = {d,e};
                break;
            }
            case 3:
            {

                cout << "Press 1 to modify first complex number" << endl;
                cout << "Press 2 to modify second complex number" << endl;
                cin >> (b);

                switch(b)
                {
                    case 1:
                    {
                        cout << "Press 1 to modify real part" << endl;
                        cout << "Press 2 to modify second complex number" << endl;
                        cin >> (c);

                        switch(c)
                        {
                            case 1:
                            {
                                cout << "provide real part:" << endl;
                                cin >> d;
                                number1.modify_real_number(d);
                                break;
                            }
                            case 2:
                            {
                                cout << "provide complex part:" << endl;
                                cin >> e;
                                number1.modify_complex_number(e);
                                break;
                            }
                        }
                        break;
                    }
                    case 2:
                    {
                        cout << "Press 1 to modify real part" << endl;
                        cout << "Press 2 to modify complex part" << endl;
                        cin >> (c);

                        switch(c)
                        {
                            case 1:
                            {
                                cout << "provide real part:" << endl;
                                cin >> d;
                                number2.modify_real_number(d);
                                break;
                            }
                            case 2:
                            {
                                cout << "provide complex part:" << endl;
                                cin >> e;
                                number2.modify_complex_number(e);
                                break;
                            }
                        }
                        break;
                    }
                }
            }
            case 4:
            {
                number1.add_numbers(number2);
                break;
            }
            case 5:
            {
                number1.print_data();
                break;
            }
        }
    }
}
