var greeting;

var newCustomer = true;

if(newCustomer){
    greeting = function(){
        alert("Welcome Amigos");
    };
}else{
    greeting = function(){
      alert("Welcome back Amigos");  
    };
}


closingMessage(greeting);
function closingMessage(message){
    message();
}