let obj = {
    name: 'vst',
    fn1: ()=>{
        this.age = 25;
        console.log(this);
    }
}
obj.fn1();