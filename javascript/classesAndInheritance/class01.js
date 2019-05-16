// displaying the creation of class and its object

let cl = (...x) => console.log(...x);

class User{
    constructor(name){
        this.name = name;
    }
    getName(){
        cl("executing");
        cl(this.name);
    }
}

let user = new User("ctrl-code");
user.getName();
cl(typeof(User));
cl(Object.getPrototypeOf(User));
cl(User.prototype);