let cl = (...arg) => console.log(...arg);

function Function1(){
    this.fname = 'vipul';
    this.mname = 'singh';
    this.setLname = function(text){
        this.lname = text;
        // cl('*** this in functions ***\n',this);
    }
    this.setAge = (age) => {
        cl('\n*** this in arrow fns ***\n',this);
        this.age = age;
    }
}

let obj1 = new Function1();
cl("=== Call 1",obj1);
obj1.setLname('thakur');
cl("=== Call 2",obj1);
cl("=== Call 3",obj1.lname);
cl('=== age is:',obj1.age);
obj1.setAge(25);
cl('=== age is:',obj1.age);
cl(obj1);
// Function();
// cl(this);