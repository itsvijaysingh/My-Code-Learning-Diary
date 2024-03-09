console.log(">   First Line of Code");

const index2 = require("./index2");


//single module export
const math = require("./mathFunc");

// module export in objects
const { add, sub, multi, divi, mod } = require("./mathFunc2");

// exports
const addFunc = require("./mathFunc2");


console.log("Single Module: " + math(1,1));

console.log("Add: " + add(2,2));
console.log("Sub: " + sub(2,2));
console.log("Multi: " + multi(2,2));
console.log("Divi: " + divi(2,2));
console.log("Mod: " + mod(2,2));

console.log("AddFunc with Exports : " + addFunc(5,5));