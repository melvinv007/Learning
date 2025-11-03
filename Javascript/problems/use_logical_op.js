"use strict";

// function checkAge(age) {
//   if (age > 18) {
//     return true;
//   } else {
//     return confirm('Did parents allow you?');
//   }
// }
//using ?

function checkAge(age)
{
    return (age>18) ? true : confirm('Did your parents allow?');
}

//using ||
function checkAge2(age)
{
    return age>18 || confirm('Did your parents allow?');
}