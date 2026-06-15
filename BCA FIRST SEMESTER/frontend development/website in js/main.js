//             ////operators in javascript
// let a = 10;
// let b = 20;
// let c = a - b;
// console.log("a=" + a, "b=" + b, "c=" + c);
// c = a + b;
// console.log(`a=${a} b=${b} c=${c}`);
// c = a * b;
// console.warn(`a=${a} b=${b} c=${c}`);
// c = a / b;
// console.error(`a=${a} b=${b} c=${c}`);
// console.info(`a=${a} b=${b} c=${c}`);
// c = 15%b;
// console.log(c);

//increment and decrement operator in javascript
// let d = 10;
// d++; //post increment operator
// console.log(d);
// ++d; //pre increment operator
// console.log(d);
// d--; //post decrement operator
// console.log(d);
// --d; //pre decrement operator
// console.log(d);


//Assign operators in javascript

// a=10;
// b=10;
// // a+=b;
// // a*=b;
// // a/=b;
// // a%=b;
// a=a**2; //for square
// console.log(a);

//Conditon in javascript

// let tarkari = "banda";
// if(tarkari == "kobi"){
//     console.log("tarkari kobi");
// }
// else if(tarkari == "banda"){
//     console.log("tarkari banda");
// }
// else{
//     console.log("Tarkari aalu");
// }

// let payment = "esewa";
// if(payment =="esewa")
// {
//     console.log("esewa khalti");
// }
// else if(payment == "khalti"){
//     console.log("khalti code");
// }
// else{
//     console.log("Not paid");
// }

// c = false || true 
// console.log(c);

// a=10; 
// if(a%2==0)
// {
//     console.log("Even number");
// }
// else{
//     console.log("Odd number");
// }
// a=8;
// c = a%2==0 ? "Even number" : "Odd number";
// console.log(c);
// marks = 60;
// let mark;
// d = marks >= 50 ? "pass" : "fail";
// mark= mark ?? "N/A";
// console.log(d);
// console.log(mark);


// payment = "esewa";
// switch(payment){
//     case "esewa":
//         console.log("esewa code");
//         break;
//     case "khalti":
//         console.log("khalti code");
//         break;
//     default:
//         console.log("Not paid");
// }


//looping in javascript

// namelist=["Ram", "Shyam", "Hari", "Gita"];
// for(let i=0; i<namelist.length; i++){
//     console.log(namelist[i]);
// }

// i=0;
// while(i<5){
//     console.log("Hello ");
//     i++;
//     console.log("\n");
// }
// do{
//     console.log("Hello ");
//     i++;
//     console.log("\n");
// }while(i<5);


//functions in javascripts

// let a=10;
// let b=20;
// function add(){
//     // aa=a;
//     // let aa=200;
//     // c=200;
//     console.log("Inside Function");
//     console.log("a="+a);
//     console.log("b="+b);
//     console.log(a+b);
//     console.log("Inside End function");
// }
// add();
// console.log("Outide a="+a);
// console.log("Outide b="+b);
// console.log("Outide C="+c);

// let a=13;
// let b=15;
// function add(aa,bb,...cc)  //aa,bb is parameters
// {
//     console.log(aa);
//     console.log(bb);
//     console.log(cc);
// }
// add(15,18,20,30, 80, 90, 23, "Hello", "My number:9823098430"); //a,b is arguments


// let student1={
//     sci:20,
//     math:30,
//     eng:40,
//     com:50
// };
// function total_marks(...marks){
//     console.log("Total marks:",marks);
//     let total=0;
//     for(let i=0; i<marks.length;i++)
//     {
//         total=total+marks[i];
//     }
//     console.log("Total marks:",total);
//     let percentage=(total/400)*100;
//     console.log("percentage=",+percentage);
//     return total;

// }
// let total=total_marks(student1.sci,student1.math,student1.eng,student1.com);
// function total_marks(...marks){
//     for(let i=0; i<marks.length;i++)
//     {
//         total=total+marks[i];
//     }
//     return total;
// }
// per(student1.sci,student1.math,student1.eng,student1.com);
// let percentage = per(total);
// function per(total){
//     let percentage=(total/400)*100;
//     return percentage;
// }
// console.log(total);
// total_marks(student1.sci,student1.math,student1.eng,student1.com);

// const arrow = () => {
//     console.log("Arrow Function");
// }
// arrow();
// const sum = (a,b) => a+b;
// let add = sum(2,5);
// console.log(add);
const arr=[334, 43,343,212,5435,6546];
const total = arr.reduce((a,b)=>a+b)
console.log(total);
console.log(arr.sort((a,b)=>a-b));