/*
===-----------------------------------===
|   ctrl-code 2019-jun-11 0430 am ist   |
===-----------------------------------===
*/


// Illustration of promise chaining concept with returning values and promises

let cl = (...x)=>console.log(...x);

let val1 = 2;

new Promise(function(resolve, reject){
    cl('initial value of val1 is', val1);
    setTimeout(function(){
        resolve(val1);
        cl('timeout executed in 1 sec');
    },1000);
})
.then(function(result){
    cl('result value in 1/3 then is',result);
    return new Promise(function(resolve,reject){
        setTimeout(function(){
            resolve(val1 = val1 * 2);
            cl('timeout executed in 3 sec');
        },3000);
    });
},null)
.then(function(result){
    cl('result value in 2/3 then is',result);
    setTimeout(()=>{
        cl('execution of setTimeout of 5 seconds');
        return val1 = val1*2;
    },5000)
},null)
.then(function(result){
    if(result == undefined)
        cl('undefined')
    else
        cl('result value in 3/3 then is',result);
},null)