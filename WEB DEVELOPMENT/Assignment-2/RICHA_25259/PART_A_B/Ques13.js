function StrOperations(str){
    
    str=str.toLowerCase();
    let c=0;
    for(let i in str){
        if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u'){
            c++;
        }
    }
    console.log("Vowel count is: ",c);

    let newstr="";
    for(let i in str){
        newstr=str.charAt(i)+newstr;
    }
    console.log("reversed string is: ",newstr);
    if(newstr==str){
        console.log("Palindrome");
    }
    else{
        console.log("not a palindrome");
    }
}
StrOperations("Apple");