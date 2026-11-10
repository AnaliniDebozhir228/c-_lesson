#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int y, n, balance, v, vv, n1;
    float tow1, tow2, tow3, tow4, tow5;
    tow1 = 1000; tow2 = 2000; tow3 = 3000; tow4 = 4000; tow5 = 5000;
    //ЗАДАНИЕ 1
    // cout<<"Enter a год: ";
    // cin>>y;
    // cout << (y % 4 == 0 ? "високосный год" : "невисокосный год");
    //ЗАДАНИЕ 2
    float sum, s;
    sum = 0;
    s = sum < 1000 ? 0.05 : sum < 5000 ? 0.1: 0.25;
    cout << "скидка: " << sum * s << endl;
    cout << "итого: " << sum * sum*s << endl;
    //ЗАДАНИЕ 3
    cout << "введите значение balance";
    cin >> balance;
    bool bo = TRUE;
    while (bo)
    { 
        cout << "введите значение n";
        cin>>n;
        switch (n)
        {
           
        case 1: 
            cout << "Ваш баланс составляет: " << balance << endl; break;   
        case 2: 
            cout << "Введите взнос: ";
            cin >> v;
            balance = balance + v;
            cout << "Ваш баланс составляет: " << balance << endl;
            break;
        case 3: 
            cout << "Введите значение вывода: ";
            cin >> vv;
            balance = balance - vv;
            cout << "Ваш баланс составляет: " << balance << endl;
            break;
        case 4:
            cout << "введите значение n1";
            cin >> n1;
            switch (n1)
            {
                case 1:
                if (balance >= tow1)
                {
                    cout << "вы купили товар1";
                    balance = balance - ((tow1 < 1000) ?tow1 * 0.95 : tow1 < 5000 ?tow1* 0.9:1* 0.75);

                    cout << "Ваш баланс составляет: " << balance << endl;
                    
                }
                else
                {
                    cout << "вы не можете купить купили товар1";
            cout << "Ваш баланс составляет: " << balance << endl;
                    
                }
                break;
                
                case 2:
                if (balance >= tow2)
                {
                    cout << "вы купили товар2";
                    balance = balance - ((tow2 < 1000) ?tow2 * 0.95 : tow2 < 5000 ?tow2* 0.9:tow2* 0.75);

            cout << "Ваш баланс составляет: " << balance << endl;
                    
                }
                else
                {
                    cout << "вы не можете купить купили товар2";
            cout << "Ваш баланс составляет: " << balance << endl;
                    
                }
                break;
                
                case 3:
                if (balance >= tow3)
                {
                    cout << "вы купили товар3";
                    balance = balance - ((tow3 < 1000) ?tow3 * 0.95 : tow3 < 5000 ?tow3* 0.9:tow3* 0.75);
            cout << "Ваш баланс составляет: " << balance << endl;
                    
                }
                else
                {
                    cout << "вы не можете купить купили товар3";
            cout << "Ваш баланс составляет: " << balance << endl;
                    
                    
                }
                break;
                
                case 4:
                if (balance >= tow4)
                {
                    cout << "вы купили товар4";
                    balance = balance - ((tow4 < 1000) ?tow4 * 0.95 : tow4 < 5000 ?tow4* 0.9:tow4* 0.75);

            cout << "Ваш баланс составляет: " << balance << endl;
                    
                }
                else
                {
                    cout << "вы не можете купить купили товар4";
            cout << "Ваш баланс составляет: " << balance << endl;
                    
                    
                }
                break;
                
                case 5:
                if (balance >= tow5)
                {
                    cout << "вы купили товар5";
                    balance = balance - ((tow5 < 1000) ?tow5 * 0.95 : tow5 < 5000 ?tow5* 0.9:tow5* 0.75);

            cout << "Ваш баланс составляет: " << balance << endl;
                    
                }
                else
                {
                    cout << "вы не можете купить купили товар5";
            cout << "Ваш баланс составляет: " << balance << endl;
                    
                    
                }
                break;
            }
          
        default:
            bo = FALSE;
            
        }
    }
    
}
