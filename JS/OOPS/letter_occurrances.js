//function to count the number of letter occurrances in a given string.


String.prototype.countLetters = function(letter) {
  var numLetters = 0;
  for (var i = 0; i < this.length; i++) {
    if (this.charAt(i).toUpperCase() == letter.toUpperCase()) {
      numLetters++;
    }
  }
  return numLetters;
}

var habanero = "This pepper has around 3 million Scoville Heat Units";
var ghostpepper = "This pepper has around 3.5 million Scoville Heat Units";
var carolinareaper = "This is the hottest pepper on the planet which has around 16 million Scoville Heat Units";

var count = habanero.countLetters("l");
alert(count);
