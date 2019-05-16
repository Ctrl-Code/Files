// this depicts how to get the flags or attributes in the
//      object for the property and set the accordingly

// console.log function
let cl = (...x) => console.log(...x);

let obj = {
    name: "ctrl-code",
    age: 25,
}

let descriptor = Object.getOwnPropertyDescriptor(obj,"name");
cl("=== original flags and values===\n",descriptor);

// Now we will try to manipulate the flags so as to edit these
//      attributes.
Object.defineProperty(obj,"name",{
    // if 'value' and other flag 'configurable' is not shown it takes in default values
    enumerable: false,
    writable: false,
});


descriptor = Object.getOwnPropertyDescriptor(obj,"name");
cl("\n=== displaying newly set flags and values ===\n",descriptor);

obj.name = "hehe";
cl("\n=== trying changing 'name' to :",`'${obj.name}'`,"===");

descriptor = Object.getOwnPropertyDescriptor(obj,"name");
cl("\n=== displaying flag after changing name ===\n",descriptor);

cl("\n=== Interating over properties we get ===");
for(let key in obj){
    cl(key,' : ',obj[key]);
}
// notice above 'name' property is not iterable and hence not shown
// since iterable was set to false above

cl("\n === redefining flags; setting enumerable to :true ===");
Object.defineProperty(obj,"name",{
    value: "20th Century",
    writable: false,
    enumerable: true,
    configurable: false,
})

descriptor = Object.getOwnPropertyDescriptor(obj,"name");
cl(descriptor);

for(let key in obj){
    cl(key,' : ',obj[key]);
}

cl("\n=== trying to change flags; configurable: false above");
cl("will get error that properties cannot be redefined ===\n\n\n\n");

Object.defineProperty(obj,"name",{
    value: "hehehe",
    writable: false,
    enumerable: true,
    configurable: false,
})