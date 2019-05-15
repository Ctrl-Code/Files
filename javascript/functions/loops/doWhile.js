let cl = (x) => console.log(x);

// output: 5 4 3 2 1
let x = 5;
do{
    cl(x);
}while(--x);

cl('---');

// output: 5 4 3 2 1 0
x = 5;
do{
    cl(x);
}while(x--);

cl ('=====');
let count = 0;
do{
    cl(1);
    cl(2);
    ++count;
}while(count!=3);
cl ('------');
cl(count);