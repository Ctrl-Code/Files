const http = require('http');
const url = require('url');
const port = 3000;

http.createServer(function(request,response){
    let user = url.parse(request.url).pathname.slice(1,);
    if(request.url == '/ctrl-code'){
        response.statusCode = 200;
        response.setHeader('Content-Type','text/plain');
        response.end('Hello Creator '+user);
    }
    else{
        response.statusCode = 404;
        response.setHeader('Content-Type','text/plain');
        response.end('Hello '+user);
    }
}).listen(port,()=>{
    console.log(`Listening on port ${port}`)
});