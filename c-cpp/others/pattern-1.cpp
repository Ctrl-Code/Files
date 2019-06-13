// ctrl-code 2019-may-06 0930 pm ist

// to print pattern like shown below
/*  33333
    32223
    32123
    32223
    33333     */

/*  
    take sample input as
    3 1 2 3
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"enter the number of patterns to be generated"<<endl;
    int number;
    cin>>number;
    for(int i=0; i!=number; ++i)
    {
        cout<<"enter the "<<i+1<<" input\t";
        int x;
        cin>>x;
        cout<<endl;
        void pattern(int);
        pattern(x);
    }    
}

void pattern(int number)
{   
    int cols = (2*number) -1,half = cols/2,x=cols;
    while(x){
        int i = cols - x, value = number;
        
        // setting symmetry in rows after mid row
        if(i > half)
            i = cols - i - 1;

        int count = i,flag = -1;
        for(int j=0; j < cols; ++j){
            cout<<value<<" ";
            if(count){
                if(flag < 0)
                    --count,--value;
                else
                    ++value;
            }
            else
            {
                if(flag < 0)
                    flag = j;
                if(j == (cols - 1 - flag))
                    ++count,++value;
            }
        }
        --x;
        cout<<endl;
    }
}