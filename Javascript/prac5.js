"use strict";

//switch case
// let arg = prompt("Enter a value?");
// switch (arg) {
//   case '0':
//   case '1':
//     alert( 'One or zero' );
//     break;

//   case '2':
//     alert( 'Two' );
//     break;

//   case 3:
//     alert( 'Never executes!' );
//     break;
//   default:
//     alert( 'An unknown value' );
// }

//functions

function showMessage()
{
    alert("Greetings!");
}

function showM(from,text)
{
    from = from + ' says ';
    alert(from + text);
}

//function that returns minimum of two
function getMinimum(a,b)
{
    return (a>b) ? b:a;
}
// alert(getMinimum(-5,-10))

//power function
function pow(x,n)
{
    let x_new = 1;
    for (let i=0;i<n;i++)
    {
        x_new *=x;
    }
    return x_new;
}
// alert(pow(4,5));

function sayHi() {
  alert( "Hello" );
}

alert( sayHi ); // shows the function code

let sayBye = function()
{
    alert("Bye");
}

let sum = (a, b) => {  // the curly brace opens a multiline function
  let result = a + b;
  return result; // if we use curly braces, then we need an explicit "return"
};

//rewrite with arrow
// function ask(question, yes, no) {
//   if (confirm(question)) yes();
//   else no();
// }

// ask(
//   "Do you agree?",
//   function() { alert("You agreed."); },
//   function() { alert("You canceled the execution."); }
// );

let ask = (question,yes,no) => (confirm(question)) ? yes() : no();