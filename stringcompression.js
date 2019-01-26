var readline = require('readline');
var reader = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
  terminal: false
});

var lines = [];
var counte = new Array(26).fill(0);

reader.on('line', function (line) {
  
    lines.push(line);
});

reader.on('close', function (line) {
  
    var linee = lines[0];

        for (var i = 0; i < linee.length; i++) {
        var x=linee[i];
    counte[x.charCodeAt(0) - 97] += 1;
}

var max=-1;
var count=1;
var x=""
    for (var i = 0; i < linee.length; i++) {
      
      if(linee[i]==linee[i+1])
      count++;
      else{
          x+= linee[i];
          if(count!=1)
          x+= count;
          count=1;
      }
      }
 console.log(x);
    
});
