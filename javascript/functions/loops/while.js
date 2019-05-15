let cl = (x) => console.log(x);

// output: 4 3 2 1
let x = 5;
while(--x){
    cl(x);
}

cl('---');

// output: 4 3 2 1 0
x = 5;
while(x--){
    cl(x);
}

cl ('=====');
let flag = 1;
while(flag){
    cl(1);
    cl(2);
    flag = 0;
}