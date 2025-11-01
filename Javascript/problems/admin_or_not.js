"use strict";

let cust = prompt("who's there?");
if (cust == null)
{
    alert("exit");
}
else if (cust == 'Admin')
{
    let pass = prompt("Enter password:");
    if (pass == "TheMaster")
    {
        alert("Welcome!");
    }
    else if (pass == null)
    {
        alert("exit");
    }
    else
    {
        alert("Wrong Password");
    }
}
else
{
    alert("I don't know you!");
}