// function Animal(color){
//     this.eat = true
//     this.color = color
// }

// function Bird(){
//     this.__proto__ = new Animal()
//     this.canFly = true
//     this.canWalk = true
//     this.walk = function(){
//         console.log("Bird is walking");
//     }
//     this.fly = function(){
//         console.log("Bird is flying");
//     }
// }

// function Cat(color){
//     this.__proto__ = new Animal(color)
//     this.canFly = false
//     this.canWalk = true
//     this.walk = function(){
//         console.log("Cat is walking");
//     }
// }

let a = 1;
function abc(context){
    console.log(context)
    console.log(window.a)
}


let obj = {
    name: "I am object"
}
abc(obj)
// console.log(this.a);




// const fluff = new Bird()
// console.log(fluff.eat);


// const marshmallow = new Cat("Blue")
// console.log(marshmallow.color); 

// function Player(name, marker){
//     this.name = name;
//    this.whoIsThis = function(context) {
//        console.log(context);
//    }
// }

// const abc = new Player("kaiz", "X")
// console.log(Player.__proto__)
// abc.whoIsThis(abc);

// const zebra = new Player("Mr zebra", "O")
// zebra.whoIsThis(zebra)
// console.log(abc.name)