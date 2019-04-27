// ctrl-code 2019-apr-27 0800 pm ist

// stack implementation using simple array

#include<iostream>
#include<cstdlib> // contains exit() function

using namespace std;

# define MAXSIZE 10

int main(){
    
    // declarations: functions
    int showMenu(void);
    int push(int *array, int top);
    void display(int *array, int top);
    int pop(int *array,int top);
    
    // declarations: variables
    int array[MAXSIZE] = {},choice = 0, top=-1;

    // processing
    label:
    choice = showMenu();
    switch (choice)
    {
        case 0:     exit(0);
        case 1:     top = push(array, top);
                    break;

        case 2:     top = pop(array, top);
                    break;

        case 3:     cout<<endl<<"top element in the stack => "<<*(array+top);
                    break;

        case 4:     cout<<endl<<"size of the stack => "<<top+1<<"/"<<MAXSIZE<<" elements";
                    break;

        case 5:     (top == -1) ? cout<<endl<<"EMPTY" : cout<<endl<<"NOT EMPTY";
                    break;

        case 6:     (top == MAXSIZE -1 ) ? cout<<endl<<"FULL" : cout<<endl<<"NOT FULL";
                    break;

        case 7:     // sending +1 to make adjustments for loop
                    display(array, top+1);
                    break;
    }
    goto label;
    return 0;
}

int showMenu(void){
    cout<<endl<<"-------------------------";
    cout<<endl<<"stack operations";
    cout<<endl<<"0 = exit";
    cout<<endl<<"1 = main = push element";
    cout<<endl<<"2 = main = pop element";
    cout<<endl<<"3 = simple = top element";
    cout<<endl<<"4 = simple = size";
    cout<<endl<<"5 = check = empty";
    cout<<endl<<"6 = check = full";
    cout<<endl<<"7 = display stack";
    cout<<endl<<"your choice => ";
    int ans;
    cin>>ans;
    cout<<endl<<"=========================";
    return ans;
}

int push(int *array, int top){
    if(top == MAXSIZE - 1){
        cout<<endl<<"stack overflow!!! returning";
        return MAXSIZE - 1;
    }
    else{
        cout<<endl<<"enter the value to be inserted => ";
        int temp;
        cin>>temp;
        *(array + ++top) = temp;
        return top;
    }
}

void display(int *array, int top){
    if(top == 0)
        cout<<endl<<"stack underflow!!! returning";
    else{
        cout<<endl<<"displaying the stack"<<endl;
        for(int i=0;i!=top;++i)
        {
            cout<<*(array + i);
            if(i != top -1)
                cout<<" => ";
        }
    }
    return ;
}

int pop(int *array, int top){
    if(top == -1){
        cout<<endl<<"stack underflow!!! returning";
        return MAXSIZE - 1;
    }
    else{
        cout<<endl<<"delete element from stack";
        *(array+top--) = 0;
        return top;
    }
}