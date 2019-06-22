/*
===-----------------------------------===
|   ctrl-code 2019-may-20 0905 pm ist   |
===-----------------------------------===
*/

// programm to depict use of let variable
//      in functions and block scopes.

let c = (...x) => console.log(...x);
let var1;
c(var1);
var1 = 25;
c(var1);
fn1();

function fn1(){
    // ERROR
    // c("in function before declaration ",var1);
    let var1 = "in function";
    c("in function after declaration ",var1);
    c(this);
}

{
    // ERROR
    // c("in block before declaration ",var1);
    let var1 = "in block";
    c("in block before declaration ",var1);
    c("block=> this",this);
}