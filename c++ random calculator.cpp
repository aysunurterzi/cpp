



/*    AYSU NUR TERZI
      17.01.2021
*/


#include <iostream>

using namespace std;
int main()
{
    cout<< "WELCOME TO CALCULATOR";
    cout << "\n";
    cout<<"Please choose the challange number";
    cout << "\n";

    int secim;
    cout << "1-Challange1(Integer Addition )"; //transaction to be calculated: int addition
    cout << "\n";
    cout << "2-Challange2(Double Addition )"; //transaction to be calculated: double addition
    cout << "\n";
    cout << "3-Challange3(Integer Division)"; //transaction to be calculated: int division
    cout << "\n";
    cout << "4-program4(Double Division)"; //transaction to be calculated: double division
    cout << "\n";
    cout << "5-Challange5(Operator Precedence)"; //transaction to be calculated: number1*number2 + number2*(number1+number2)
    cout << "\n";
    cout << "6-program6(Operator Precedence with Parentheses)"; //transaction to be calculated: (number1+number2) * (number1+number2)+number2
    cout << "\n";
    cout << "7-program7(Using IF THEN ELSE statement)"; //transaction to be calculated: big one is the answer
    cout << "\n";
    cout << "8-program8(Combine IF clause with operations)"; //transaction to be calculated: if num1+num2=<3, answer is:num1 ; else answer is:num2
    cout << "\n";
    cout << "9-program9(Combine IF clause with operations )"; //transaction to be calculated: if num1+num2=<3, answer is:num1 ; else answer is:num2
    cout << "\n";
    cout << "10- QUIT";
    cout << "\n";


    cin>>secim;
    {

        if(secim==1)
        {
            cout<<"!!!!!please give integer numbers!!!!!";
            cout << "\n";
            int a,b,c;
            cout << "First number:";
            cout << "\n";
            cin>>a;
            cout << "Second number:";
            cout << "\n";
            cin>>b;
            c=a+b;
            cout<<"Answer is:";
            cout<<c;
            cout << "\n";

            return 0;

        }

        if(secim==2)
        {
            cout<<"!!!!!please give double numbers!!!!!";
            cout << "\n";
            double a,b,c;
            cout << "First number:";
            cout << "\n";
            cin>>a;
            cout << "Second number:";
            cout << "\n";
            cin>>b;
            c=a+b;
            cout<<"Answer is:";
            cout<<c;
            cout << "\n";


            return 0;

        }

        if(secim==3)
        {
            int a,b,c;
            cout<<"!!!!!please give integer numbers!!!!!";
            cout << "\n";
            cout << "First number:";
            cout << "\n";
            cin>>a;
            cout << "Second number:";
            cout << "\n";
            cin>>b;
            c=a/b;
            cout<<"Answer is:";
            cout<<c;
            cout << "\n";

            return 0;

        }

        if(secim==4)
        {
            cout<<"!!!!!please give double numbers!!!!!";
            cout << "\n";
            double a,b,c;
            cout << "First number:";
            cout << "\n";
            cin>>a;
            cout << "Second number:";
            cout << "\n";
            cin>>b;
            c=a/b;
            cout<<"Answer is:";
            cout<<c;
            cout << "\n";

            return 0;

        }


        if(secim==5)
        {
            cout<<"transaction to be calculated: number1*number2 + number2*(number1+number2)";
            cout << "\n";
            cout<<"!!!!!please give integer numbers!!!!!";
            cout << "\n";
            int a,b,c,d;
            cout << "First number:";
            cout << "\n";
            cin>>a;
            cout << "Second number:";
            cout << "\n";
            cin>>b;
            c=a+b;
            d=b*a+b*c;
            cout<<"Answer is:";
            cout<<d;
            cout << "\n";

            return 0;

        }


        if(secim==6)
        {
            cout<<"transaction to be calculated: (number1+number2) * (number1+number2)+number2";
            cout << "\n";
            cout<<"!!!!!please give integer numbers!!!!!";
            cout << "\n";
            int a,b,c,d;
            cout << "First number:";
            cout << "\n";
            cin>>a;
            cout << "Second number:";
            cout << "\n";
            cin>>b;
            c=a+b;
            d=(a+b)*c+b;
            cout<<"Answer is:";
            cout<<d;
            cout << "\n";

            return 0;

        }


        if(secim==7)
        {
            cout<<"transaction to be calculated: big one is the answer";
            cout << "\n";
            cout<<"!!!!!please give integer numbers!!!!!";
            cout << "\n";
            int a1,b1,a2;
            cout << "First number:";
            cout << "\n";
            cin>>a1;
            cout << "Second number:";
            cout << "\n";
            cin>>b1;
            {
                if(a1>b1)
                {
                    cout<<"Answer is:";
                    cout<<a1;
                }
                else
                {
                    cout<<"Answer is:";
                    cout<<b1;
                }
                return 0;

            }
        }

        if(secim==8)
        {
            cout<<"transaction to be calculated: if num1+num2=<3, answer is:num1 ; else answer is:num2";
            cout << "\n";
            cout<<"!!!!!please give integer numbers!!!!!";
            cout << "\n";
            int a,b,c;
            cout << "First number:";
            cout << "\n";
            cin>>a;
            cout << "Second number:";
            cout << "\n";
            cin>>b;
            c=a+b;
            {
                if(c<=3)
                {
                    cout<<"Answer is:";
                    cout<<a;
                }
                else
                {


                    cout<<"Answer is:";
                    cout<<b;
                }
                return 0;

            }

        }


        if(secim==9)
        {


            cout<<"transaction to be calculated: if num1+num2=<3, answer is:num1 ; else answer is:num2";
            cout << "\n";
            cout<<"!!!!!please give integer numbers!!!!!";
            cout << "\n";


            int a,b;
            cout << "First number:";
            cout << "\n";
            cin>>a;
            cout << "Second number:";
            cout << "\n";
            cin>>b;



            return 0;

        }

        if(secim==10)
        {
            cout << "Exiting the program.";
            cout << "\n";
            return 0;

        }


    }







}








