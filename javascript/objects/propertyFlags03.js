let cl = (...x) => console.log(...x);

let obj = {
    name: "ctrl-code",
    age: 25,
}

let descriptors = Object.getOwnPropertyDescriptors(obj);

for(let key in descriptors){
    let x = 0;
    if(key === "name")
        x = "cheetah";
    else
        x = 30;
        Object.defineProperty(obj,key,{
            value: x,
            writable: false,
            configurable: false,
            enumerable: false,
        });
    }

 descriptors = Object.getOwnPropertyDescriptors(obj);

cl(descriptors);