"use strict";

outer:
for(let n=2;n<15;n++)
{
    for(let i=2;i<=n/2;i++)
    {
        if(n%i == 0) continue outer;
    }
    alert(n);
}

//label name usage