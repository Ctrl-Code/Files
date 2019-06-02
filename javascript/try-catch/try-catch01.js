/*
===-----------------------------------===
|   ctrl-code 2019-jun-02 0405 pm ist   |
===-----------------------------------===
*/


// Below given javascript program demonstrates the scopes in try-catch

let var1 = 100;
console.log('initial value:',var1);
try{    
    // redeclared by same name, so new variable
    let var1 = 0;
    console.log('in try:',var1);
}finally{
    // since new scope so outside variable is accessible until same named
    //      variable is declared in this
    console.log('in finally var1/2:',var1 = var1/2);
}
console.log('end value:',var1);