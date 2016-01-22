// Take on the Pirates

var vehicle1 = {
  type: "Motorboat",
  capacity: 6,
  storedAt: "Ammunition Depot"
};
var vehicle2 = {
  type: "Jet Ski",
  capacity: 1,
  storedAt: "Reef Dock"
};
var vehicle3 = {
  type: "Submarine",
  capacity: 8,
  storedAt: "Underwater Outpost"
};

var vehicles = [vehicle1, vehicle2, vehicle3];

var findVehicle = function(name, list) {
  for (var i = 0; i < list.length; i++) {
    if (list[i].type == name) {
      return list[i].storedAt;
    }
  }
};

findVehicle("Submarine", vehicles);

vehicle1.capacity = 10;
vehicle2.submersible = false;
vehicle3.weapon = "Torpedoes";
vehicle1.submersible = false;
vehicle2.weapon = "Lasers";
vehicle3.capacity = 16;
vehicle1.weapon = "Rear-Mounted Slingshot";
vehicle3.submersible = true;

vehicle1["# of weapons"] = 1;
vehicle2["# of weapons"] = 4;
vehicle3["# of weapons"] = 8;

var superBlinders = [
  ["Firelight", 4000],
  ["Solar Death Ray", 6000],
  ["Supernova", 12000]
];

var lighthouseRock = {
  gateClosed: true,
  weaponBulbs: superBlinders,
  capacity: 30,
  secretPassageTo: "Underwater Outpost",
  numRangers: 3,
  ranger1: {
    name: "Rudy",
    skills: "magnification burn",
    station: 2
  },
  ranger2: {
    name: "Jack",
    skills: "uppercut launch",
    station: 3
  },
  ranger3: {
    name: "Rey",
    skills: "bomb defusing",
    station: 1
  }

  //modified addRangerFunction
  addRanger: function(name, skills, station) {
    this.numRangers++;
    this["ranger" + this.numRangers] = {
      name: name,
      skills: skills,
      station: station
    };
  }
};

/*function addRanger(location, name, skills, station) {
  location.numRangers++;
  location["ranger"+location.numRangers] ={
    name: name,
    skills: skills,
    station: station
  };

}*/

addRanger(lighthouseRock, "Rudy", "magnification burn", 2);
addRanger(lighthouseRock, "Jack", "uppercut launch", 3);
addRanger(lighthouseRock, "Rey", "bomb defusing", 1);

function dontPanic(location) {
  var list = "Avast, me hearties!\n" +
    "There be Pirates nearby! Stations!\n";

  // loop through the rangers and append to list
  for (var i = 1; i <= location.numRangers; i++) {
    var ranger = location["ranger" + i];
    var name = ranger.name;
    var superblinder = location.weaponBulbs[ranger.station - 1][0];
    list += name + ", man the " + superblinder + "!\n";
  }

  alert(list);

  //adding weaponBulbs
  lighthouseRock.addBulb = function(name, wattage) {
    this.weaponBulbs.push([name, wattage]);
  };

  lighthouseRock.addBulb("Blasterbright", 5000);
  lighthouseRock.addBulb("Sight Slayer", 1800);
  lighthouseRock.addBulb("Burner of Souls", 7500);

}
//function to calculate the rangers on or off duty
var relieveDuty = function(vehicle, day){
	var offDuty = [];
  var onDuty = [];

  for(var i = 1; i <=vehicle.numRangers; i++){
    if(vehicle["ranger"+i].dayOff == day){
    	offDuty.push(vehicle["ranger"+i]);
    }else{
    	onDuty.push(vehicle["ranger"+i]);
    }
    delete vehicle["ranger"+i];
  }
  vehicle.numRangers -= offDuty.length;

  for (var j = 1; j <= vehicle.numRangers; j++) {
    vehicle["ranger"+j] = onDuty.shift();
  }
  return offDuty;
};

var offToday = relieveDuty(vehicle3, "Friday");

var rockSpearguns = {
  Sharpshooter: {barbs: 2, weight: 10, heft: "overhand"},
  Pokepistol: {barbs: 4, weight: 8, heft: "shoulder"},
  Javelinjet: {barbs: 4, weight: 12, heft: "waist"},
  Firefork: {barbs: 6, weight: 8, heft: "overhand"},
  "The Impaler": {barbs: 1, weight: 30, heft: "chest"}
};

//listGuns
var listGuns = function(guns){
  for (speargun in guns){
  	console.log(speargun);
  }
};

//summon listGuns
listGuns(rockSpearguns);
