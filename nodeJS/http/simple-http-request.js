const http = require('http');

let options = {
    // change with desired host
    host: '127.0.0.1',
    // change with desired port number
    port: 3000,
    // change with desired path
    path: '/',
}

let request = http.request(options);
request.on('response',(res)=>{
    res.setEncoding('utf-8');
    res.on('data',(data)=>{
        console.log(data);
    });
});
request.end();