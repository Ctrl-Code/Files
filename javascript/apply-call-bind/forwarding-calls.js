/*
===-----------------------------------===
|   ctrl-code 2019-may-31 0415 am ist   |
===-----------------------------------===
*/

// Illustrates call forwarding i.e. use of 'call','apply' and 'bind' keywords
// further illustrates the corresponding use of 'this' keyword in js.

function greet(name){
    console.log(`hello ${name}`);
    console.log(this);
};

let object = {
    name: 'ctrl-code',

    greetApply: ()=>{
        greet.apply(object,[object.name]);
    },

    // call function used
    greetCall: ()=>{
        greet.call(object,object.name);
    },

    // bind function used
    greetBind: ()=>{
        let bindGreet = greet.bind(object);
        bindGreet(object.name);
    },

    // arrow function used
    greetArrow: ()=>greet.call(object,object.name),

    // normal method used
    greetFunction: function(){
        greet.apply(this,[this.name]);
    },

    dashes: ()=>console.log('#=============================='),
};

object.greetBind();
object.dashes();

object.greetArrow();
object.dashes();

object.greetFunction();
object.dashes();

object.greetCall();
object.dashes();

object.greetApply();
object.dashes();