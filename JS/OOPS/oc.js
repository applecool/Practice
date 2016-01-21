// Take on Pirates

var vehicle1 = {type: "Motorboat", capacity: 6, storedAt: "Ammunition Depot"};
var vehicle2 = {type: "Jet Ski", capacity: 1, storedAt: "Reef Dock"};
var vehicle3 = {type: "Submarine", capacity: 8, storedAt: "Underwater Outpost"};

var vehicles = [vehicle1, vehicle2, vehicle3];

var findVehicle= function(name, list){
  for(var i = 0; i <list.length; i++){
    if(list[i].type == name ){
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

//bulbs - array
var superBlinders = [
  ["Firelight", 4000],
  ["Solar Death Ray", 6000],
  ["Supernova", 12000]
];

var lighthouseRock = {
  gateClosed: true,
  bulbs: [200, 500, 750],
  capacity: 30,
  secretPassageTo: "Underwater Outpost"
};

// removing bulbs property from lighthouseRock
delete lighthouseRock.bulbs;

// adding weaponBulbs property to lighthouseRock
lighthouseRock.weaponBulbs = superBlinders;

console.log(lighthouseRock.weaponBulbs[2][0]);
