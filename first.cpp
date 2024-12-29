#include <iostream>

using namespace std;


void calculator(){
    cout << "Fancy Calculator" << endl;
    cout <<"Enter two numbers: ";
    int a,b,op;
    cin >>a >> b;
    cout <<"Entered numbers are: " << a << " and " << b << endl;
    cout << "Enter the operation" << endl;
    cout << "1. Addition , 2. Subtraction, 3. Multiplication, 4. Division" << endl;
    cin >> op;
     if(a==0 || b==0){
            cout << "Invalid Input" << endl;
        }
          else{
                switch(op){
                    case 1:
                        cout << "You have selected:Addition "  << endl;
                        cout << "The result is: " << a+b << endl;
                        break;
                    case 2:
                        cout << "You have selected:Subtraction "  << endl;  
                        cout << "The result is: " << a-b << endl;
                        break;
                    case 3:
                        cout << "You have selected:Multiplication "  << endl;
                        cout << "The result is: " << a*b << endl;
                        break;
                    case 4:
                        cout << "You have selected:Division "  << endl;
                        cout << "The result is: " << a/b << endl;
                        break;
                    default:
                        cout << "Invalid Operation" << endl;
                        cout << "Select again";

                }
          }
    cout << "1-Continue 2-Exit" << endl;
    int choice;
    cin >> choice;
    if(choice ==1){
        calculator();
    }
    else{
        cout << "Exiting Calculator" << endl;
    }
            
}
int main(){
    calculator();
return 0;
}