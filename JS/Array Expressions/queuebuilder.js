//Treat array of functions like a Queue, passing the result of each function into the next until the Queue is empty.

var puzzlers = [
  function(a) { return 8 * a - 10; },
  function(a) { return (a - 3) * (a - 3) * (a - 3); },
  function(a) { return a * a + 4; },
  function(a) { return a % 5; }
];
var start = 2;

var applyAndEmpty = function(input, queue){
  for(var i = 0; queue.length >0; queue.shift()){
			input = queue[i](input);
  	}
  return input;
};

alert(applyAndEmpty(start, puzzlers));
