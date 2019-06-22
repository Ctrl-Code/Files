let cl = (...arg) => console.log(...arg);

function funNormal(){
    cl('hello tiny world!!!\nAnd Big universe');
    cl(this);
}

funNormal();

function funArrow(){
    cl('====== this in Arrow function',this);
}

funArrow();