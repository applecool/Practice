//Trace the closure to find the end result

function mystery(input) {
  var secret = 5;
  input += 2; // input = 5

  function mystery2(multiplier) {
    multiplier *= input; //multiplier = 6 * 5 = 30

    return secret * multiplier; // 5*30 = 150
  }

  return mystery2;
}

function mystery3(param) {
  function mystery4(bonus) {
    return param(6) + bonus; //returned value of mystery2 i.e. 150 + 2 = 152
  }
  return mystery4;
}

var hidden = mystery(3); //input is 3; returns mystery2
var jumble = mystery3(hidden); //mystery2 is passed in as param; mystery3 returns mystery4.
var result = jumble(2); //2 is passed to the mystery4 as bonus.
