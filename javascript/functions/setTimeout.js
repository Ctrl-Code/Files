/*
===-----------------------------------===
|   ctrl-code 2019-may-19 0516 pm ist   |
===-----------------------------------===
*/

// program depicts use of setTimeout function in js


// short-name created for console.log function
let cl = (...x) => console.log(...x);

cl('Pausing for 1 second...');

// calling setTimeout function
setTimeout(fn1,1000);

function fn1(){
    cl('completed 1 second of execution...');
}