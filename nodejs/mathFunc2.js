function add(num1, num2){
    return num1+num2;
}
function sub(num1, num2){
    return num1-num2;
}
function multi(num1, num2){
    return num1*num2;
}
function divi(num1, num2){
    return num1/num2;
}
function mod(num1, num2){
    return num1%num2;
}

module.exports = {
    add, sub, multi, divi, mod
};

exports.addFunc = add;