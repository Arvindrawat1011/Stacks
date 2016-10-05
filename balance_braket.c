#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
 int top=-1;
char pop(char *stack)
{
	if(top==-1)
	    return 0;
     char x=stack[top];
     top--;
    return x;
} 
void push(char *stack,char data)
{   
     top++;
     
     stack[top]=data;
}
int check(char *stack, char data)
{      char bracket;
   
    switch(data)
    {
    	 case ')':  bracket='(';
    	             break;
    	 case ']':  bracket='[';
		            break;
    	 case '}':  bracket='{';
		             break;
	 }
	 if(stack[top]==bracket)
	 {
	 	 char p=pop(stack);
	 	   
	 }
        else
        {
        	return 0;
		}
	return 1;
}

int main(){
    
    int t, len,a0,i,val=0;
	
	 char ch; 
    scanf("%d",&t);
    for( a0 = 0; a0 < t; a0++)
	{
        char* s = (char *)malloc(10240 * sizeof(char));
        scanf("%s",s);
          len=strlen(s);
        char stack[len];
         for(i=0;i<len;i++)
             {    
			      ch=s[i];
             	 if(ch=='{'||ch=='['||ch=='(')
             	    {
             	    	 push(stack,s[i]);
					}
                    else
                  {   
                        val=check(stack,ch);
            
                    }
                       
             }
            
           if(val==0)
                printf("NO\n");
        else
               if(top==-1)
                   printf("YES\n");
                   else
                    printf("NO\n");
                   
            
            top=-1;
        }
    
    return 0;
}
