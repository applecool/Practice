//Trace the closure and find the value of the result

function mystery(input){
  var secret = 6;
  function mystery2(multiplier){
    multiplier*= input; // multiplier = 2*5 = 10

    return secret * multiplier; // 6* 10 = 60
  }

  return mystery2;
}

var hidden = mystery(5); //returns mystery2
var result = hidden(2); //multiplier is 2
