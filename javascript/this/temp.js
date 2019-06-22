
//'use strict';
{	
	let obj = {
		fun(){
        	return {age: 25,naam: ()=>console.log('dlkfhldsa',this),};
        },
// 		prop: function abc(){
		prop: ()=>{
        				console.log('abc',this);
//                         (function bcd(){
							(()=>{
                        	this.age = 108;
							console.log('in abc',this);
                            (function(){
                            	console.log('in in abc',this);
                            })();
                        })();
                    },
};
obj.prop();
// obj.fun().naam();
}
