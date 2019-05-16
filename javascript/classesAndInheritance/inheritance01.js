// depict simple inheritance and classes

let cl = (...x) => console.log(...x);

class ParentClass{
    constructor(name,age){
        this.name = name;
        this.age = age;
    }

    display(){
        cl(this.name,this.age);
    }
}

// here we use the keyword 'extends' to inherit from above class
class ChildClass extends ParentClass{

    // here we don't create constructor as it is defined for
    //      class we are inheriting from.
    display(){
        cl(`${this.name} belongs to the 'ChildClass'`);
    }
}

let child = new ChildClass('vst',24);
child.display();
child.super.display();