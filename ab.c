/*Artimetic operator
let a = 5;
let b = 7;
console.log("a=", a, " & b=", b);
console.log("a+b=", a + b);
console.log("a-b=", a - b);
console.log("a*b=", a * b);
console.log("a/b=", a / b);
console.log("a%b=", a % b);
console.log("a**b=", a ** b);
a = a + 1;
console.log(a);
a = a - 1;
console.log(a);
//comparison oprators
let c = 5;
let d = 5;
console.log("c==d", c == d);
console.log("c!=d", c != d);
console.log("!(c<d)=",!(c<d));*/
/*let num=prompt("enter a number:");
if(num%5===0)
{
    console.log(num,"is multiple of 5");
}
else{
    console.log(num,"is not a multiple of 5");
}*/
let score=75  ;
let grade;
if (score >= 90 && score <= 100) {
    grade = "A";
}
else if (score >= 70 && score <= 89) {
    grade = "B";
}
else if (score >= 60 && score <= 69) {
    grade = "c";
}
else if (score >= 50 && score <= 59) {
    grade = "d";
}
console.log("according to score your grade was:", grade);