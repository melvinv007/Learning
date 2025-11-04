"use strict";
let value = 1029;
// value = String(value);

// alert("   156        ");
// alert(Number("   156        "));
// alert(Boolean("")); // important

//basic math operators

// alert("1"+3);
// alert(1+4+"5");
// alert(6-'2');
// alert(6/'2'/5);

// let a = value + (value = value +1);
// alert(a);

// let counter = 1;
// let b = ++counter; // (*)

// alert(b); // 2
// alert(counter);//2


// let c = counter++; // (*)
// alert(c); // 2
// alert(counter);//3

//comma 
// let a = (1+100,200);
// alert(a);

// let con=confirm("Sure you want to continue?");
// if(con) 
// {
//     alert("Congrats you are hacked");
//     alert("No point closing this site");
// }
// else
// {
//     alert("You are missing so much");
//     alert("Grow up you baby");
// }
// if(!con) alert("You are missing so much");

// let age = prompt("Enter your age:");
// let access = (age>18) ? true : false;
// if (access) 
// {
//     alert("Hey there big guy");
// }
// else
// {
//     alert("Your Mom has been notified");
// }

let company = prompt('Which company created JavaScript?', '');

(company == 'Netscape') ?
   alert('Right!') : alert('Wrong.');