/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/

//Runtime 0ms beats 100% users and MEmory 8.06MB used beats 5.08%;


bool isValid(char* s) {
    bool status =true;
    int i=0;
 int len = strlen(s);
    char stack[len]; 
    int check=-1;
    while(s[i]!='\0'){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            check++;
            stack[check]=s[i];
        }
        else if(s[i]==')')
        {
            if(check==-1){
                status=false;
                break;
            }
           else if(stack[check]=='(')
            {
                check--;
            }
            else {
                status=false;
                break;
            }
        }
         else if(s[i]=='}')
        {
            if(check==-1){
            status=false;
            break;
        }
          else  if(stack[check]=='{')
            {
                check--;
            }
            else {
                status=false;
                break;
            }
        }
         else if(s[i]==']')
        { 
            if(check==-1){
            status=false;
            break;
        }
          else  if(stack[check]=='[')
            {
                check--;
            }
            else {
                status=false;
                break;
            }
        }
        i++;
        




    }
     if (check != -1) {
        status = false;
    }
    return status;
    
}

