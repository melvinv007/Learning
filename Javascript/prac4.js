"use strict";

// Logical operators 

// OR

// let result = 0 || "" || 69;
// alert(result);

// let a=1,b=0,c=-1;
// alert((a=a+1) || b );

// let result = 1 && " " && 90;
// alert(result);

//loops 
// let i=0;
// while(i<3)
// {
//     alert(i);
//     i++;
// }
// i = 100;
// do
// {
//     alert(i);
//     i++;
// } while (i<3);

//for loop
// for(let i=0 ; i<3 ; i++)
// {
//     alert(i);
// }
// alert(i); //error in dev console

// if (i > 5) {
//   alert(i);
// } else {
//   continue; //error
// }

// for (let i = 0; i < 3; i++) {

//   for (let j = 0; j < 3; j++) {

//     let input = prompt(`Value at coords (${i},${j})`, '');

//     // what if we want to exit from here to Done (below)?
//   }
// }

// alert('Done!');

//Labels
// outer: for (let i = 0; i < 3; i++) {

//   for (let j = 0; j < 3; j++) {

//     let input = prompt(`Value at coords (${i},${j})`, '');

//     // if an empty string or canceled, then break out of both loops
//     if (!input) break outer; // (*)

//     // do something with the value...
//   }
// }

// alert('Done!');

// let i = 0;
// while (i++ < 5) alert( i );

//tasks
// for (let i=0;i<11;i++)
// {
//     if (i%2) continue;
//     alert(i);
// }

// let i=2;
// while (i<11)
// {
//     if(i%2 == 0)
//     {
//         alert(i);
//         i++;
//     }
//     i++;
// }

// for (let i = 0; i < 3; i++) {
//   alert( `number ${i}!` );
// }

// let i=0;
// while(i<3)
// {
//     alert(i);
//     i++;
// }

// let inp = prompt("Enter a number greater than 100:");
// while(inp && Number(inp)<=100)
// {
//     inp = prompt("Enter a number greater than 0:");
// }

//prime numbers

// let inp = +prompt("Enter a positive number");
// let prime = 0;
// for (let i=2;i<=inp/2;i++)
// {
//     if(inp%i) continue;
//     alert(`${inp} is not a prime`);
//     prime=0;
//     break;
// }
// if(prime) alert(`${inp} is a prime`);