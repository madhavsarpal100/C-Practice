var readline = require('readline');
var reader = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

var lines = [];
var i=0; var flag=0;
var n;

reader.on('line', function (line) {
    lines.push(line);
});reader.on('close', function (line) {
   
n = parseInt(lines[0])
var array=lines.slice(1)
while(i<n)
{ if(array[array[i]]!=i) 
    {flag=1;break;}
   i++; 
}
if(flag==1)
console.log("false");
else console.log("true");


});
