#include <iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter the day number between 1 to 7 : ";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Day1-Sunday.."<<endl;
        break;
    case 2:
        cout<<"Day2-Monday.."<<endl;
        break;
    case 3:
        cout<<"Day3-Tuesday.."<<endl;
        break;
    case 4:
        cout<<"Day4-Wednesday.."<<endl;
        break;
    case 5:
        cout<<"Day5-Thrusday.."<<endl;
        break;
    case 6:
        cout<<"Day6-Friday.."<<endl;
        break;
    case 7:
        cout<<"Day7-Saturday.."<<endl;
        break;
    
    default:
        cout<<"Please enter the number between 1 to 7 !!!!!"<<endl;
        break;
    }
    return 0;
}