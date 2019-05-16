/*
===-----------------------------------===
|   ctrl-code 2019-may-17 0234 am ist   |
===-----------------------------------===
*/

// removes the even occurences of string of small cased alphabets passed
//      and repeats till no even such even occurence is found

console.time("ctrl-code");
    let ans = que = 'abcddcbae';
    let aLen = counter = char = 1;
    aLen = ans.length;
    for(let i=0; i!= aLen; ++i){
        if(i == 0){
            char = ans.charAt(0);
            counter = 1;
        }
        else{
            if(char != ans.charAt(i)){
                if(counter %2 == 0){
                    let temp = ans.split('');
                    temp.splice(i-counter,counter);
                    ans = temp.join('');
                    aLen = ans.length;
                    i=-1;
                }
                else{
                    char = ans.charAt(i),counter = 1;
                }
            }
            else{
                ++counter;
                
                // if end char is also same as previous
                if( i == aLen - 1){
                    if(counter %2 == 0){
                        let temp = ans.split('');
                        temp.splice(i+1-counter,counter);
                        ans = temp.join('');

                    }
                }
            }
        }
    }
console.log(ans);
console.timeEnd('ctrl-code');