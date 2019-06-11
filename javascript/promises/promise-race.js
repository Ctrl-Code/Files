/*
===-----------------------------------===
|   ctrl-code 2019-jun-11 0430 am ist   |
===-----------------------------------===
*/

// Illustration of 'promise.race()' method which takes in array of promises and proceed
//      if either one of the promises is resolved or rejected

let cl = (...x)=> console.log(...x);

// USER INPUT <==========================
//      enter input array '1' = resolve, '0' = reject
let arr = [0,1,10];

let promise1 = new Promise((resolve,reject)=>{
    setTimeout(function(){
        cl('2 sec delay');
        if(arr[0] == 1)
            resolve(1);
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
            resolve(2);
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
            resolve(3);
        else if(arr[2] == 0)
            reject('failed in promise3');
        else
            reject('error in input in promise3');
    },4000);
});

let race = Promise.race([
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

// Here always 1st promise will decide  as it will be resolved or rejected the first and will decide
//      the 'race' promise value.
race
.then(
(result)=>{
    cl('result is promise1',race,'||',promise1);
    cl('promise2 is',promise2);
    cl('promise3 is',promise3);
    cl('accessing value of "race" promise',result);
    return Promise.all([
        promise2.catch(error=>{
            cl('2nd rejected with message',error);
            return 'fail2'; }),
        promise3.catch(error=>{
            cl('3rd rejected with message',error);
            return 'fail3'; }),
    ]);
},
(error)=>cl('error that will never occur',error))
.then(
    (result2)=>{
    cl('===> 2nd One <===');
    cl('promise2 is',promise2);
    cl('promise3 is',promise3);
    cl('accessing value of "all" promise',result2);
},
(error)=>cl('error that will never occur',error))