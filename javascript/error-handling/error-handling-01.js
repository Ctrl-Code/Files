try{
    console.log('printing the value of',a);
    console.log('This will not be executed');
}
catch(err){
    console.log("----------------------------------------------------------");
    console.log('Error Occured---|\n',"================\n",err.name,"\n",
                err.message,"\n\n\n",err.stack,
                "\n\n\n\nComplete error object as\n",err);
    console.log("==========================================================");
}
console.log("the error is shown above",
            "now we procede as normal...");