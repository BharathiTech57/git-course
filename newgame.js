console.log("    $$$$GAME$$$$   ")
console.log("..Guess the number..😁")
console.log("Do you want play....then enter s ")
s=prompt();
if(s=="s" | s=="S")
{
    console.log("lets start...");
    number=25
    console.log("Now start the Guessing the number:");
    
   while(1){
     ans=Number(prompt());
    if(ans==25){
        console.log("ohh...you won");
        console.log("_congratulations");
        break;
    }else
    {
        console.log("sorry..");
        console.log("you are wrong...");
        console.log("try again:");

    }}
}