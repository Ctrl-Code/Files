#include <iostream>
#include <cmath>

#define newLine std::cout << std::endl;

int main()
{
    std::string s0; // string object creation

    std::string s1("hello world");  // initialisation 1
    std::string s2 = "hello world"; // initialisation 2

    std::string s3(s2); // copy constructor

    std::string s4 = s3; // creation of string from another string

    char a[] = {'a', 'b', 'c', '\0'};
    std::string s5(a); // creation of string object from character array above

    std::cout << s0;
    newLine;
    std::cout << s1;
    newLine;
    std::cout << s2;
    newLine;
    std::cout << s3;
    newLine;
    std::cout << s4;
    newLine;
    std::cout << s5;
    newLine;

    std::cout << s2.empty(); // checks if the string is empty or not
    newLine;

    s0.append("Hello World");
    std::cout << "APPENDED STRING " << s0;
    newLine;

    s0 += "!!!";
    std::cout << "CONCATENATED STRING " << s0;
    newLine;

    std::cout << "LENGTH OF THE STRING " << s0.size() << " " << s0.length();
    newLine;

    s0.clear();
    std::cout << "CLEARING THE STRING " << s0;
    newLine;

    s0 = "Apple";
    s1 = "Mango";
    std::cout << s0.compare(s1); // the operator '<' and '>' are also overloaded
    newLine;

    std::cout << s1[0];
    newLine;

    s0 = "My name is ctrl-code";
    std::cout << (s0.find("ctrl", 12) == -1);
    newLine;

    std::cout << "NPOS " << (std::string::npos == -1);
    newLine;

    std::cout<<"OUR STRING IS "<<s0<<" AND WE WOULD TRY ERASING IT WITHOUT PARAMS";
    newLine;
    std::cout<<s0.erase(5,1); // (index,count)
    newLine;
    std::cout<<"OUR STRING AFTER THE OPERATION IS "<<s0;
    newLine;

    std::cout<<"Way of iterating over the string other than the normal way";
    newLine;
    for(auto i:s0){ // for each loop
        std::cout<<i<<":";
    }
    newLine;

    std::cout<<"Using auto iterators";
    newLine;
    for(auto it=s0.begin();it!=s0.end();++it){
        std::cout<<*it<<"|";
    }
    newLine;

        std::cout<<"Using iterators";
    newLine;
    for(std::string::iterator it=s0.begin();it!=s0.end();++it){
        std::cout<<"["<<*it<<"]";
    }
    newLine;

    // using reverse iterators
    std::cout<<"FORWARD AND BACKWARD ITERATORS";
    newLine;
    s0 = "0123456789";
    std::string::iterator forward;
    forward = s0.begin();
    for(; forward<s0.end();++forward){
        std::cout<<"-> "<<*forward;
        newLine;
    }

    std::string::reverse_iterator backward;
    backward = s0.rbegin();
    for(; backward < s0.rend();++backward){
        std::cout<<"<-"<<*backward;
    }
    return 0;
}