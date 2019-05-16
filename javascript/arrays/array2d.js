let a = [];
let b = [1,2,3];
a.push(b);
b = [4,5,6];
a.push(b);
b = [7,8,9];
a.push(b);
b = ['a',2,4]; // since js is dynamic. So can store string as well
a.push(b);

// iterating over array of arrays
for(let aa of a){
    let temp = [];
    for(let aaa of aa){
        temp.push(aaa);
    }
    console.log(...temp);
}