let cl = (...arg) => console.log(...arg);

let obj = {
    name: 'vst',
    that: this,
    setAge: function(age){
        // this.age = age;
        cl('\n=== this here is\n',this.that);
    },
    redefineName: (name)=>{
        console.log(that)
        cl('\n=== this in arrow fn is',this);
    },
}

// cl(obj);
// obj.setAge(34);
// cl('*** after setting age');
obj.setAge();
// cl(obj);
// cl(global.name);