    #include <iostream>
    using namespace std;
    
    int main(){
        int count=4;

        //top part
        for (int i = 0; i < count; i++)
        {
            //sapce loop
            for (int j = 0; j <count-i-1; j++)
            {
                cout<<"  ";
            }

            cout<<" * ";

            if (i!=0)
            {                
                //star loop
                for (int k = 0; k < 2*i-1;k++)
                {
                    cout<<"  ";
                }

                cout<<" * ";   
            }
            cout<<endl;
        }

        //bottom part
         for (int i = 0; i < count-1; i++)
        {
            //sapce loop
            for (int j = 0; j <i+1; j++)
            {
                cout<<"  ";
            }
            
            cout<<" * ";
            if (i!=count-2)
            {
               for(int k=0;k<2*(count-i)-5;k++)
               {
                    cout<<"  ";
               }
               cout<<" * ";
            }
            cout<<endl;
        }
        return 0;
    }