let testCallBack = function(userId, callback, cb2, cb3){
    setTimeout(()=>{
    //   newUser = true;
      callback((cb2)=>{
        cb2(()=>{})
      })
    },2000);
}
var a = b =false;
let fn = function(n){
    console.log(1);
    a = n
}
let fnn = function(n){
    console.log(1);
    b = n;
}
testCallBack(1, fn, fnn);
// while(!a) {
// }
console.log(1);