//Trace the closure and find the value of result.

function mystery(){
  var secret = 7;
  function mystery2(multiplier){
    multiplier*= 5; //multiplier = 3*5 = 15

    return secret * multiplier; // 7*15 = 105
  }

  return mystery2;
}

var hidden = mystery();
var result = hidden(3); //3 passed as the multiplier
