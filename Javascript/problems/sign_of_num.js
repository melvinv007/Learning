"use strict";

let num = prompt("Enter a number");
if (num > 0)
{
    alert(1);
}
else if(num < 0)
{
    alert(-1);
}
else if (num == '')
{
    alert("Please enter a number");
}
else if(num == 0)
{
    alert(0);
}
else
{
    alert("Please enter a number");
}