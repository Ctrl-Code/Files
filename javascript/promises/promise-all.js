/*
===-----------------------------------===
|   ctrl-code 2019-jun-11 0425 am ist   |
===-----------------------------------===
*/

// Illustration of 'promise.all()' method which takes in array of promises and proceed
//      if all the promises are either resolve or rejected

let cl = (...x)=> console.log(...x);

// USER INPUT <==========================
//      enter input array '1' = resolve, '0' = reject
let arr = [0,1,10];

let promise1 = new Promise((resolve,reject)=>{
    setTimeout(function(){
        cl('2 sec delay');
        if(arr[0] == 1)
            resolve(4);
        else if(arr[0] == 0)
            reject('failed in promise1');
        else
            reject('error in input in promise3');
    },2000);
});

let promise2 = new Promise((resolve,reject)=>{
    setTimeout(()=>{
        cl('6 sec delay');
        if(arr[1] == 1)
            resolve(4);
        else if(arr[1] == 0)
            reject('failed in promise2');
        else
            reject('error in input in promise2');
    },6000);
});

let promise3 = new Promise((resolve,reject)=>{
    setTimeout(()=>{
        cl('4 sec delay');
        if(arr[2] == 1)
            resolve(4);
        else if(arr[2] == 0)
            reject('failed in promise3');
        else
            reject('error in input in promise3');
    },4000);
});

let all = Promise.all([
    promise1.catch(error=>{
        cl('1st rejected with message',error);
        return 'fail1'; }),
    promise2.catch(error=>{
        cl('2nd rejected with message',error);
        return 'fail2'; }),
    promise3.catch(error=>{
        cl('3rd rejected with message',error);
        return 'fail3'; }),
    ]);

all.then(
(result)=>{
    cl('result is',all);
    cl('promise1 is',promise1);
    cl('accessing value of 3rd promise',result[2]);
},
(error)=>cl('error occured in ',error));