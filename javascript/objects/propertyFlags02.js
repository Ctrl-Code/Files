// this depicts how to get flags or attributes in the object for all
//   the properties and clone the whole object with flags.

// console.log function
let cl = (...x) => console.log(...x);

let obj = {
    name: "ctrl-code",
    age: 25,
}

let descriptors = Object.getOwnPropertyDescriptors(obj);

for(let key in descriptors){
    cl(key);
    let descriptor = Object.getOwnPropertyDescriptor(obj,key);
    cl(descriptor);
    cl(String(key) == "age" ? true: false);
}

cl("\nCloning object");
let clone = Object.defineProperties({},descriptors);
cl("displaying cloned object",clone);