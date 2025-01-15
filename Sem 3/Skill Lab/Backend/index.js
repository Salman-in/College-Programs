const http = require('http');

let abc = http.createServer((req, res) => {
    res.write("Hey!")
    res.end()
    console.log("Server is running on port 3000");

    abc.listen(3000);
});